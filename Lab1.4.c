//Nicholas Meyer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    /*
    Purpose: Checks the command line to run in debug or no-debug mode.
    Input: the number and array of command line arguments.
    Output: Returns either 1 (debug mode) or 0 (no-debug mode). 
    */
int checkDebugMode(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: Usage: %s [debug | no-debug]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (strcmp(argv[1], "debug") == 0) {
        return 1;
    } else if (strcmp(argv[1], "no-debug") == 0) {
        return 0;
    } else {
        printf("Error: Usage: %s [debug | no-debug]\n", argv[0]);
        exit(EXIT_FAILURE);
    }
}


int main(int argc, char *argv[]) {
    int debug_mode = checkDebugMode(argc, argv);

    int choice;
    int intnum1, intnum2;
    float floatnum1, floatnum2;
    char input[100];
    char word1[100], word2[100];

    /*
    Purpose: To display a menu.
    Input: Inputs 7 lines of text of a menu.
    Output: Outputs a printed menu title and 5 functions to choose from. The last print asks the user to choose what function to do.
    */
    while(1) {

        if (debug_mode) {
            printf("\n[Debug Mode]\n");
        }

        printf("\n--------Menu--------\n");
        printf("\n1) Add two numbers\n");
        printf("\n2) Multiply two numbers\n");
        printf("\n3) Reverse a string\n");
        printf("\n4) Enter two words\n");
        printf("\n5) Exit\n");
        printf("\n:Enter (1-5) what you would like to do. \n");
        scanf("%d", &choice);
        
        switch (choice) {
            /*
            purpose: Takes two integers, adds them together and prints what the two integers are equal to.
            input: Asks the user to enter a first and second number.
            output: Adds the two numbers from the user and prints what the two numbers are equal to.
            */
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &intnum1);
                printf("Enter the second number: ");
                scanf("%d", &intnum2);
                printf("%d + %d = %d\n", intnum1, intnum2, intnum1 + intnum2);
                break;
            /*
            purpose: Takes two floats, mulitplys the two floays and prints what the two floats are equal to.
            input: Asks the user to enter a first and second float number.
            output: Adds the two float numbers together and prints what floats are equal to.
            */
            case 2:
                printf("Enter the first number: ");
                scanf("%f", &floatnum1);
                printf("Enter the second number: ");
                scanf("%f", &floatnum2);
                printf("%.3f + %.3f equals = %.3f\n", floatnum1, floatnum2, floatnum1 * floatnum2);
                break;
            /*
            purpose: Takes in the users string and finds the length and then prints the string backwards.
            input: Asks the user to enter a string.
            output: reverses the users string and prints the string backwards.
            */
            case 3:
                printf("Enter a string: ");
                scanf("%s", input);
                int length = strlen(input);
                printf("Your string in reverse is: ");
                for (int i = length; i >= 0; i--) {
                    printf("%c", input[i]);
                }
                break;
            /*
            purpose: Finds out if the users two words are the same or not.
            input: Asks the user to input two words.
            output: Prints the two users words with either "are the same words" or "are not the same words".
            */
            case 4:
                printf("Enter a word:");
                scanf("%s", word1);
                printf("Enter another word: ");
                scanf("%s", word2);
                if (strcmp(word1, word2) ==0) {
                    printf("%s and %s are the same words\n", word1, word2);
                } else {
                    printf("%s and %s are not the same words\n", word1, word2);
                }
                break;
            /*
            purpose: To close the menu if the user hits 5.
            input: No input
            output: Prints "Goodbye".
            */
            case 5:
                printf("Goodbye!\n");
                return 0;

        }
    }
    return 0;
}
