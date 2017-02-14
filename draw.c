#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {

  if(x0 > x1){
    int temp = x0;
    x0 = x1;
    x1 = temp;
    temp = y0;
    y0 = y1;
    y1 = temp;
  } //check for left octants
  
  int i; //ctr var
  int x = x0;
  int y = y0;
  int a = (y1-y0);
  int b = -(x1-x0);
  if(!a){
    for(i=x0;i<x1;i++){
      plot(s, c, i,y);
    }
    return;
  } //check for 0 slope
  else if(!b){
    if(y1 < y0){
      int temp = y0;
      y0 = y1;
      y1 = temp;
    }
    for(i=y0;i<y1;i++){
      plot(s, c, x,i);
    }
    return;
  }//check for infinite slope
  else{
    int slope = a / (-b); //issue here
    printf("Slope: %d\n", slope);
    printf("0 x %d, y %d, a %d, b %d, slo %d\n", x,y,a,b,slope);
    if(slope <= 1 && slope >= 0 && y1 - y0 > 0){
      int d = 2*a + b;
      printf("1 x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      while(x < x1){
	plot(s, c, x,y);
	if(d>0){
	  y++;
	  d+=2*b;
	}
	x++;
	d+=2*a;
	printf("x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      }
    }//octant one
    else if(slope > 1){
      int d = 2*b + a;
      printf("2 x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      while(y < y1){
	plot(s, c, x,y);
	if(d<0){
	  x++;
	  d+=2*a;
	}
	y++;
	d+=2*b;
	printf("x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      }
    }//octant two
    else if(slope > -1 && slope <= 0 && y1 - y0 < 0){
      int d = 2*a - b;
      printf("8 x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      while(x < x1){
	plot(s, c, x,y);
	if(d<0){
	  y--;
	  d-=2*b;
	}
	x++;
	d+=2*a;
	printf("x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      }
    }//octant eight
    else{
      int d = a - 2*b;
      printf("7 x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      while(y > y1){
	plot(s, c, x,y);
	if(d>0){
	  x++;
	  d+=2*a;
	}
	y--;
	d-=2*b;
	printf("x %d, y %d, a %d, b %d, d %d\n", x,y,a,b,d);
      }
    }//octant seven
    
  }
}

