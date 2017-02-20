 /*****************************************
-Name:          Daniel Bachler
-Filename:      main2.c
-Date:          9/24/15
-Description: 
          Example of multiple file useage.
*****************************************/
/*scanf printf*/
#include <stdio.h>
/*average*/
#include "AVERAGE.H"

float average(float x, float y);

int main(void){
	
  float x, y, ave;
  
  printf("Please input two numbers to average: ");
  scanf(" %f %f", &x, &y);
  
  ave = average(x, y);
  printf("\n\nThe average of your two number is %g", ave);
  
  return 0;
}