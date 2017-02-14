#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

  draw_line(250, 250, 250, 500, s, c);
  draw_line(250, 250, 375, 500, s, c);
  draw_line(250, 250, 500, 500, s, c);
  draw_line(250, 250, 500, 375, s, c);
  draw_line(250, 250, 500, 250, s, c);
  draw_line(250, 250, 500, 125, s, c);
  draw_line(250, 250, 500, 0, s, c);
  draw_line(250, 250, 375, 0, s, c);
  draw_line(250, 250, 250, 0, s, c);
  draw_line(250, 250, 125, 0, s, c);
  draw_line(250, 250, 0, 0, s, c);
  draw_line(250, 250, 0, 125, s, c);
  draw_line(250, 250, 0, 250, s, c);
  draw_line(250, 250, 0, 375, s, c);
  draw_line(250, 250, 0, 500, s, c);
  draw_line(250, 250, 125, 500, s, c);

  display(s);
  save_extension(s, "lines.png");
}  
