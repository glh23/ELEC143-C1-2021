#include "uop_msb.h"
using namespace uop_msb;

DigitalIn BlueButton(USER_BUTTON);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
LCD_16X2_DISPLAY display;

int main()
{

    // ***** MODIFY THE CODE BELOW HERE *****

    //1. Use a while loop to wait for the blue button to be pressed, then released. For full marks, account for switch bounce.
    
    {
    bool on = true;
    while(on == true)
    {
        switch(BlueButton)
        {
            case 0:
                wait_us(100000);
            break;

            case 1:
                printf("blue button pressed\n");
                wait_us(100000);
            break;

            default:
                wait_us(100000);
        }        
    }
    }

    //comment

    //2. Using a while-loop, flash the yellow LED on and off 5 times. Each flash should last 0.5s. 
    {
    short flashNum = 5;
    while(flashNum > 0)
    {
        printf("yellow flash\n");
        leds = 2;
        wait_us(500000);
        leds = 0;
        flashNum = flashNum-1;
    }
    }
    
    //3. Using a while-loop, flash the green LED on and off 10 times. Each flash should last 0.25s. 
    {
    short flashNum = 10;
    while(flashNum > 0)
    {
        printf("green flash\n");
        leds = 3;
        wait_us(250000);
        leds = 0;
        flashNum = flashNum-1;
    }
    }
    //4. Using a while-loop, flash the red LED on and off 20 times. Each flash should last 0.125s. 
    {
    short flashNum = 20;
    while(flashNum > 0)
    {
        printf("red flash\n");
        leds = 1;
        wait_us(125000);
        leds = 0;
        flashNum = flashNum-1;
    }
    }
    //5. Using a while-loop, count from 50 down to -50 in steps of 10 - print the results on row 1 of the LCD screen every 0.5 second 
    {
    int count = 50;
    while(count > -51)
    {
        display.locate(1, 0);
        display.printf("count = %i\n",count);
        count = count - 10;
        wait_us(500000);
    }
    }
    // ***** MODIFY THE CODE ABOVE HERE *****

    while (true) {

    }
}


