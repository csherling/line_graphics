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
  
  draw_line(0, 0, 100, 100, s, c);

  clear_screen(s);


  display(s);
  save_extension(s, "lines.png");
}  
