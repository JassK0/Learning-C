
/*

Answer file: ans7.c

Given file que7.c is supposed to access today's day, month and date
from the tm structure of time.h, and print it formatted like the
following (assuming you run it on Mon Dec 2):
Today is Monday December 2

If you run the program on another day, the output changes appropriately.

que7.c, however, is missing some code, denoted by XXXXXXX.

Copy que7.c to ans7.c and complete ans7.c by replacing only XXXXXXX,
so that the program functions as required.

*/

#include <stdio.h>
#include <time.h>
#define C 10 //longest day and month have 9 chars: Wednesday and September

int main(void) {
  struct tm *systime;
  time_t t;

  char months[][C] = {"January","February","March","April","May","June","July",
                       "August","September","October","November","December"};
  //XXXXXXX
    char days [][C] = {"Monday", "Tueday", "Wednesday", "Thursday", 
                        "Friday", "Saturday", "Sunday"};
  t = time(NULL);            //seconds since the Epoch
  systime = localtime(&t);   //break down into struct tm

  printf("Today is a %s ", days[systime->tm_wday] );
  printf("%s ",  months[systime->tm_mon]);
  printf("%d\n",systime->tm_mday);

  return 0;
}
