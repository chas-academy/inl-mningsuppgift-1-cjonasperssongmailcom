#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your  code goes here

    //Array to save the results
    int result[99];
    //variables
    int dice_roll = 0;
    int sum = 0;
    double avg = 0.0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;

    //for loop to generate 100 throws
    for(int i = 0; i < 100; i++){
        dice_roll = (rand() % 6) +1;
        result[i] = dice_roll;
        sum += dice_roll;

        if (dice_roll == 1){
            ones++;
        }
        else if (dice_roll == 2){
            twos++;
        }
        else if (dice_roll == 3){
            threes++;
        }
        else if (dice_roll == 4){
            fours++;
        }
        else if (dice_roll ==5){
            fives++;
        }
        else if (dice_roll == 6){
            sixes++;
        }

    }

    avg = sum / 100.0;

    printf("%d\n", ones);
    printf("%d\n", twos);
    printf("%d\n", threes);
    printf("%d\n", fours);
    printf("%d\n", fives);
    printf("%d\n", sixes);
    printf("%d\n", sum);
    printf("%.1f\n", avg);

    return 0;
}
