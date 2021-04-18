#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*userNumber is the 1 2 3 that the user will type
      number is the max number 100, 1000 or 10000 is pass it to mysteriousNumber Max
    */
    int number = 0, userNumber= 0;

    /*Ask The user for The number He want and While the number he type is not 1 or 2 or 3 will ask again*/
    do{

        printf("1-Choose between 1 and 100 \n");
        printf("2-Choose between 1 and 1000 \n");
        printf("3-Choose between 1 and 10000 \n");
        scanf("%d", &userNumber);

        /*check the userNumber*/
        switch(userNumber){
            case 1:
                number = 100;
            break;

            case 2:
                number = 1000;
            break;

            case 3:
                number = 10000;
            break;

            default:
                printf("please Choose Between 1, 2 or 3 \n");
            break;
        }



    }while(userNumber != 1 && userNumber != 2 && userNumber != 3);

    const int MAX = number, MIN = 1;
    int mysteriousNumber = 0;/*The Random Number*/
    int PlayerNumber = 0;/*The Player Guess Number*/
    int playing = 1;/*if the playing = 1 Repeat Game and if the player = 0 End the Game*/

    /*While The Player choosing 1 The Game Will Repeat, And if he choose 0 Game over*/
    do {

        int counter = 1;
        int repeat = 1;
        srand(time(NULL));
        mysteriousNumber = (rand() % (MAX - MIN + 1) + 1);

        do{

            printf("What's the number? ");
            scanf("%d", &PlayerNumber);

            if(mysteriousNumber > PlayerNumber) {

                printf("Greater !\n");

            }else if(mysteriousNumber < PlayerNumber) {

                printf("Lesser !\n");

            }else {

                printf("Bravo, you have found the mysterious number in %d stypes !!! \n", counter);

            }

            counter ++;

        }while(PlayerNumber != mysteriousNumber);

        printf("Do You Want To Continue Plating? \n");
        printf("For Yes type 1. \n");
        printf("For No type 0. \n");

        do{

            scanf("%d", &repeat);

            switch(repeat) {

            case 1:
                playing = 1;
            break;

            case 0:
                playing = 0;
                printf("Game Over");
            break;

            default:
                printf("please enter 1 to continue playing OR 0 To End the game /n");
            break;

            }

        }while(repeat != 1 && repeat != 0);

    }while(playing == 1);

    return 0;

}
