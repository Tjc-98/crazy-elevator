#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

#define LOWER_BOUND_LEVEL 1
#define UPPER_BOUND_LEVEL 30
#define GO_UP_LEVELS 7
#define GO_DOWN_LEVELS 3
#define START_LEVEL 1

int main() {
    int currentLevel = START_LEVEL;
    int goalLevel;
    char userInput;

    srand(time(NULL));
    goalLevel = ((rand() % (UPPER_BOUND_LEVEL - LOWER_BOUND_LEVEL)) + 1) + LOWER_BOUND_LEVEL;

    printf("Du befinner dig i en hiss i ett hus med %d vaningar.\n", UPPER_BOUND_LEVEL);
    printf("Hissen har tva knappar upp %d (u) och ned %d (n).\n", GO_UP_LEVELS, GO_DOWN_LEVELS);
    printf("Hissen ar pa vaning %d och ditt mal ar vaning %d.\n", LOWER_BOUND_LEVEL, goalLevel);
    
    while (TRUE) {
        printf("Vaning %d: ", currentLevel);
        scanf(" %c", &userInput);

        int checkLimitation = 0;
        if(userInput == 'u') {
            checkLimitation = currentLevel + GO_UP_LEVELS;
        } else if (userInput == 'n') {
            checkLimitation = currentLevel - GO_DOWN_LEVELS;
        } else {
            printf("Olagligt inlagt val, försök igen.\n");
            continue;
        }

        if (checkLimitation > UPPER_BOUND_LEVEL || 
            checkLimitation < LOWER_BOUND_LEVEL) {
            
            printf("Omojligt!\n");
            continue;
        }

        currentLevel = checkLimitation;

        if (currentLevel == goalLevel) {
            printf("Vaning %d\n", currentLevel);
            printf("Grattis du har natt malet!\n");
            break;
        }
    }
    

    return 0;
}