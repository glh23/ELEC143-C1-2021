#include "uop_msb.h"
using namespace uop_msb;

BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

int main()
{
    leds = 0;
    // ***** MODIFY THE CODE BELOW HERE *****

    // 1. Write a for-loop to count from 0 to 100 in steps of 10 - print the results to the serial terminal
  for (int i = 0; i < 101; i++) 
  {
    printf("%i , \n", i);
  }

  //adding space so i can easily see the different questions
  for (int x = 0; x < 4; x++)
  {
    printf("\n");
  }
  // 2. Write a for-loop to count from 100 down to 10 in steps of 5 - print the results to the serial terminal
  for (int j = 100; j > 5; j++) 
  {
    printf("j = %i , \n", j);
    j = j-6;
  }
  //adding space so i can easily see the different questions
  for (int x = 0; x < 4; x++)
  {
  
  printf("\n");
  }

// 3. Write some code to demonstrate nestedfor-loops (one loop within another)
for (int x = 0; x < 3; x++) 
  {
    printf("x = %i , \n", j);
    for (int y = 0; y < 3; y++) 
  {
    printf("y = %i , \n", j);
  }
  }

    // ***** MODIFY THE CODE ABOVE HERE *****
    leds = 7;

    while (true) {

    }
}

