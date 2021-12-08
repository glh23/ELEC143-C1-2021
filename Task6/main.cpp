#include "uop_msb.h"
using namespace uop_msb;


// You are to use these ojects to read the switch inputs
DigitalIn SW1(USER_BUTTON);
DigitalIn SW2(BTN1_PIN);
DigitalIn SW3(BTN2_PIN);
DigitalInOut SW4(BTN3_PIN,PIN_INPUT,PullDown,0);
DigitalInOut SW5(BTN4_PIN,PIN_INPUT,PullDown,0);

// You are to use this object to control the LEDs
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

//Use this to sound an error
Buzzer alarm;

int main()
{
    while (true)
    {
        leds = 0;

        //Beep
        alarm.playTone("A", Buzzer::HIGHER_OCTAVE);
        wait_us(250000);
        alarm.rest();

        //Wait for the blue button using a while loop
        while (SW1==0);

        
        // For full marks, debounce the switches with suitable delays

        // This is a "combination lock" activity. Write some code to detect the following sequence of press-and-release inputs
        // SW1 and SW2, SW5, SW4, SW2 and SW3
        // If the full sequence is entered, correctly, the green LED should flash 3 times
        // If a sequence of inputs was entered incorrectly, the red LED should light and the buzzer should sound for 5 seconds
        // For full marks, debounce the switches and use flow control structures and arrays to avoid deep nesting of code

        // ***** MODIFY THE CODE BELOW HERE *****
        
        
        int array1[6] = {1,2,5,4,2,3};
        int array2[6] = {0,0,0,0,0,0};

        for(unsigned short i = 0; i != 6; i++)
        {
            wait_us(200000);
            //does nothing when nothing is pressed
            while(SW1 == 0 and SW2 == 0 and SW3 == 0 and SW4 == 0 and SW5 ==0 ){}
            
            //check if anything is pressed
            if (SW1==1) {
                array2[i]=1;
                printf("pressed SW1 \n");
            }
            else if (SW2==1) {
                array2[i]=2;
                printf("pressed SW2 \n");
            }
            else if (SW3==1) {
                array2[i]=3;
                printf("pressed SW3 \n");
            }
            else if (SW4==1) {
                array2[i]=4;
                printf("pressed SW4 \n");
            }
            else if (SW5==1){
                array2[i]=5;
                printf("pressed SW5 \n");
            }
        }
        //end for
        bool pin = false;
        for(unsigned short i = 0; i!=6; i++)
        {
            printf("i = %i\n", i);
            if(array1[i] == array2[i])
            {
                pin = true;
            }
            else
            {
                pin = false;
                break;
            }
        }

        if (pin == true) {
            printf("it worked\n");
            for(unsigned short i = 0; i!=3; i++)
            {
                leds = 4;
                wait_us(1000000);
                leds = 0;
                wait_us(1000000);
            }
        }
        
        else 
        {
            printf("wrong combination\n");
            leds = 1;
            alarm.playTone("A", Buzzer::HIGHER_OCTAVE);
            wait_us(5000000);
            alarm.rest();
            leds = 0;
        }
        // ***** MODIFY THE CODE ABOVE HERE *****
    }
}


