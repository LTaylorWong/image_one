#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

  int r, g, b, x, y, n;
  int file;
  int xres, yres;
  int max_c;
  //char buff[100];
  
  time_t;
  srand((unsigned) time(&t));
  n = rand() % 3
    
  r = 255;
  xres = 100;
  yres = 100;
  
  file = open("pic.ppm", 0_CREAT|0_WRONLY|0_RDONLY);
  sprintf(header, "P3 \n %i,%i \n %i", xres, yres, max_c);
  write(file, header, strlen(header));
  for (x<100; x++){
    for (y<100; y++){
      g += n;
      b += n;
      sprintf(line, "&d, &d, &d", r , g, b);
      write(file, line, strlen(line));
    }
  }
  close(file);  
}
