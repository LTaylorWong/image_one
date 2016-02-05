#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){

  int r, g, b, x, y, n;
  int file;
  int xres, yres;
  int max_c;
  char line[100];
  char header[100];
  time_t t;
  
  srand((unsigned) time(&t));
  n = rand() % 3;
    
  //r = 255;
  xres = 100;
  yres = 100;
  
  file = open("pic.ppm", O_CREAT|O_WRONLY|O_RDONLY);
  
  sprintf(header, "P3 \n %i,%i \n %i", xres, yres, max_c);
  write(file, header, strlen(header));
  for(x = 0;x<100; x++){
    for (y = 0;y<100; y++){
      r = 255;
      g += n;
      b += n;
      sprintf(line, "&d, &d, &d", r , g, b);
      printf("%s\n", line);
      write(file, line, strlen(line));
    }
  }
  close(file);  
}
