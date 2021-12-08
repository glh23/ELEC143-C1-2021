#include "uop_msb.h"
using namespace uop_msb;

// 4x4 Array
double M[4][3] = 
{
    {1.0, 2.0, 3.0},  {-3.0, -4.0, -5.0},  {10.0, 11.0, 12.0},  {-1.0, -2.0, -3.0}
};

double N[3][4] = 
{
    {1.0, 2.0, 3.0, 4.0},  {-3.0, -4.0, -5.0, -6.0},  {10.0, 11.0, 12.0, 13.0}
};

void displayArray(int rows, int cols, double *Array)
{
    for (unsigned row=0; row<rows; row++) {
        for (unsigned col=0; col<cols; col++) {
            printf("%8.1f\t", Array[(row*cols)+col]);
        }
        printf("\n");
    }
}

// ***** For (1) WRITE YOUR ARRAY Y HERE *****
double y[4][4];
// ***** For (3) WRITE YOUR FUNCTION HERE *****

// *****  END YOUR FUNCTION HERE  *****

int main()
{
    double* addressOfArray = (double*)M;    //Obtain base address of the array M
    displayArray(4,3,(double*)M);           //Display in terminal

    // ***** MODIFY THE CODE BELOW HERE *****

    // 1. Create another Array Y with the correct dimensions to hold the result of M*N (see  comments above)

    // 2. Write a nested loop to perform a matrix multiplication M*N and store the result in Y
    
    
    //rows in M
    for(int g = 0; g < 4; g++)
    {
        //colums in M
        for(int h = 0; h < 3 ; h++)
        {
            //colums in N
            for(int j = 0; j<4 ; j++)
            {
                //god i love maths *crying sounds*
                y[g][h] += M[g][j]*N[j][h];
                printf("y[%i][%i] =  %f\n", g, h, y[g][h]);
            }
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(int k; k < 4; k++)
    {
        for(int l; l < 4; l++)
        {
            printf("y[%i][%i] =  %f\n", k, l, y[k][l]);
        }
    }
    
    // 3. Write a function to multiply two matrices together (see comments above). Include some text code to demonstrate it working

    // ***** MODIFY THE CODE ABOVE HERE *****


    while (true) {
    }
}

