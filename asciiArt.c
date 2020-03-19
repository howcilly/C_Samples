/********************************************************/
/*Ronald Espinoza                                       */
/*1/23/2020                                             */
/*CS-241 Section 005                                    */
/*                                                      */
/*site used to generate ascii ART                       */
/*  http://patorjk.com/software/                        */
/*  taag/#p=display&h=1&f=Rectangles&t=Ronald%20Espinoza*/
/********************************************************/
#include <stdio.h>

//in our main call we create a pointer and print it
void main(void){

  char *ascii = 
  " _____            _____            _                     \n"
  "| __  | ___  ___ |   __| ___  ___ |_| ___  ___  ___  ___ \n"
  "|    -|| . ||   ||   __||_ -|| . || ||   || . ||- _|| .'|\n"
  "|__|__||___||_|_||_____||___||  _||_||_|_||___||___||__,|\n"
  "                             |_|                         \n";

  printf("%s", ascii);
}