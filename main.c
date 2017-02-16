#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  
  c.red = MAX_COLOR;
  c.green = MAX_COLOR;
  c.blue = MAX_COLOR;

  clear_screen(s);  

  /* draw_line(0, 0, 100, 100, s, c); */
  /* draw_line(0, 0, 0, 100, s, c); */
  /* draw_line(0, 0, 100, 0, s, c); */
  /* draw_line(200, 200, 100, 100, s, c); */


  /* draw_line(100, 400, 250, 400, s, c); */
  /* draw_line(100, 400, 100, 300, s, c); */
  /* draw_line(250, 400, 250, 300, s, c); */
  /* draw_line(110, 390, 240, 390, s, c); */
  /* draw_line(110, 390, 110, 310, s, c); */
  /* draw_line(240, 390, 240, 310, s, c); */
  /* draw_line(110, 310, 240, 310, s, c); */
  /* draw_line(100, 300, 225, 225, s, c); */
  /* draw_line(250, 300, 350, 235, s, c); */
  /* draw_line(225, 225, 350, 235, s, c); */
  /* draw_line(150, 280, 240, 290, s, c); */
  /* draw_line(170, 270, 260, 280, s, c); */
  /* draw_line(190, 260, 280, 270, s, c); */
  /* draw_line(225, 255, 265, 260, s, c); */
  /* draw_line(245, 245, 285, 250, s, c); */
  /* draw_line(265, 260, 285, 250, s, c); */
  /* draw_line(245, 245, 225, 255, s, c); */ //dw's laptop

  /* c.green = 0; */
  /* c.blue = 0; */
  /* draw_line(216, 272, 220, 274, s, c); */
  /* draw_line(216, 271, 220, 273, s, c); */
  /* draw_line(216, 270, 220, 272, s, c);  */ //holmes's laptop (nub)

  int x;
  double d;
  for(x = 0; x < 125; x++){
    c.red = x * 2;
    c.green = (x*c.red+128) % 256;			\
    c.blue = (x*c.green) % 256;
    draw_line(0,4*x,500 - 4*x, 0,s,c);
    draw_line(4*x,500,0,4*x,s,c);    
    draw_line(500,500-4*x,4*x,500, s,c);
    draw_line(500-4*x, 0, 500, 500-4*x, s, c);
  }
  draw_line(250, 250, 250, 500, s, c); c.red = 255;
  draw_line(250, 250, 375, 500, s, c); c.green = 0;
  draw_line(250, 250, 500, 500, s, c); c.blue = 127;
  draw_line(250, 250, 500, 375, s, c); c.red = 127;
  draw_line(250, 250, 500, 250, s, c); c.green = 127;
  draw_line(250, 250, 500, 125, s, c); c.blue = 255;
  draw_line(250, 250, 500, 0, s, c); c.red = 0;
  draw_line(250, 250, 375, 0, s, c); c.green = 255;
  draw_line(250, 250, 250, 0, s, c); c.blue = 127;
  draw_line(250, 250, 125, 0, s, c); c.red = 255;
  draw_line(250, 250, 0, 0, s, c); c.green = 0;
  draw_line(250, 250, 0, 125, s, c); c.blue = 255;
  draw_line(250, 250, 0, 250, s, c); c.red = 127;
  draw_line(250, 250, 0, 375, s, c); c.green = 127;
  draw_line(250, 250, 0, 500, s, c); c.blue = 127;
  draw_line(250, 250, 125, 500, s, c); c.red = 0;

  /* draw_line(100, 100, 200, 225, s, c); */
  /* draw_line(105, 100, 205, 200, s, c); */
  /* int y; */
  /* for(x = 0; x < 10; x++){ */
  /*   for(y = 0; y < 10; y++){ */
  /*     draw_line(0, 25*y, 500 - 50*x, 0, s, c); */
  /*     draw_line(25*x, 0, 0,500 - 50*y, s, c); */
  /*     draw_line(500, 25*y, 500 - 50*x, 500, s, c); */
  /*     draw_line(25*x, 500, 500,500 - 50*y, s, c); */
  /*     /\* draw_line(0, 25*y, 500 - 50*x, 500, s, c); *\/ */
  /*     /\* draw_line(25*x, 0, 500,500 - 50*y, s, c); *\/ */
  /*     /\* draw_line(500, 25*y, 500 - 50*x, 0, s, c); *\/ */
  /*     /\* draw_line(25*x, 500, 0,500 - 50*y, s, c); *\/ */
  /*   } */
  /* } */

  
  display(s);
  save_extension(s, "lines.png");
}  
