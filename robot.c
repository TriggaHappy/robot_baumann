#include <stdio.h>
#include <stdbool.h>

void main()
{
    
int stepCount = 0;

printf("\nWelcome to the robotprogram\n");
    
for (int i = 1; i < 5; ++i)
  {
    bool inFrontOfWall = false;

    while (inFrontOfWall == false)
    {
        char wallCheck;

        printf("\nAm I facing a wall?\n");
        printf("Please enter y or n\n");

        do
        {
            wallCheck = getchar();

        } while (getchar() != '\n');

        if (wallCheck == 'y') {
            printf("Im turning to the next wall.\n");

            inFrontOfWall = true;

        }else if (wallCheck == 'n'){
            printf("\nI make a step.\n");
            ++stepCount;

        }
        
    }
       
  };
  
printf("Im almost back where I started. Im walking there now. yay.\n");
printf("It took me %d steps to where I am now.\n", stepCount);
  
}

