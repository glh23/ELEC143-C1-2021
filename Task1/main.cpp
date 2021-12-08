#include "uop_msb.h"
using namespace uop_msb;

BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

int main()
{
    leds = 0;
    // ***** MODIFY THE CODE BELOW HERE *****

    // 1. Write a for-loop to count from 0 to 100 in steps of 10 - print the results to the serial terminal
  
  printf("1. Write a for-loop to count from 0 to 100 in steps of 10 - print the results to the serial terminal\n");
  for (int i = 0; i < 101; i+=10) 
  {
    printf("%i , \n", i);
  }

 
  // 2. Write a for-loop to count from 100 down to 10 in steps of 5 - print the results to the serial terminal
  
  printf("2. Write a for-loop to count from 100 down to 10 in steps of 5 - print the results to the serial terminal\n");
  for (int j = 100; j > 5; j-=5) 
  {
    printf("j = %i , \n", j);
  }
  

// 3. Write some code to demonstrate nestedfor-loops (one loop within another)

printf("3. Write some code to demonstrate nestedfor-loops (one loop within another)\n");
for (int x = 0; x < 3; x++) 
  {
    printf("x = %i , \n", x);
    for (int y = 0; y < 3; y++) 
  {
    printf("y = %i , \n", y);
  }
  }

    // ***** MODIFY THE CODE ABOVE HERE *****
    leds = 7;

    while (true) {

    }
}

