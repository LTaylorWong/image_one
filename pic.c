#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){

  int r,g,b,x,y, file;
  char buff[100];
  time_t;

  srand((unsigned) time(&t));
  n = rand() % 3
    
  r = 255;
  x = 0;
  y = 0;
  
  file = open("pic.ppm", 0_CREAT|0_WRONLY|0_RDONLY);

  printf("P3 \n 100 100\n 255");
  for (x<100; x++){
    for (y<100; y++){
      x += n;
      y += n;
      sprintf()
    write(file,line, strlen(line));
  }
  
  close(file);  
}
