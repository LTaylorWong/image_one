#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){

  int r, g, b, x, y, n, n2, n3;
  int file;
  int xres, yres;
  int max_c = 255;
  char line[100];
  char header[100];
  time_t t;
  
  srand((unsigned) time(&t));
  n = rand() % 100;
  n2 = rand()% 200;
  n3 = rand()% 150;
  
  xres = 500;
  yres = 500;
  
  file = open("pic.ppm", O_CREAT|O_WRONLY|O_RDONLY);
  
  sprintf(header, "P3 \n %i,%i \n %i \n", xres, yres, max_c);
  write(file, header, strlen(header));
  for(y = 0;y<yres; y++){
    for (x = 0;x<xres; x++){
      r = max_c % n;
      g = max_c % n;
      b = max_c % n;
      sprintf(line, "%d %d %d ", r , g, b);
      write(file, line, strlen(line));
    }
    sprintf(line, "%s\n", line);
    write(file, line, strlen(line));
  }
  close(file);  
}
