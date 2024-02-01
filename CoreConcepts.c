//Nicholas Meyer

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int choice;
    int intnum1, intnum2;
    float floatnum1, floatnum2;
    char input[100];
    char word1[100], word2[100];

    printf("\n--------Menu--------\n");
    printf("\n1) Add two numbers\n");
    printf("\n2) Multiply two numbers\n");
    printf("\n3) Reverse a string\n");
    printf("\n4) Enter two words\n");
    printf("\n5) Exit\n");
    printf("\nPlease enter the number that corresponds to the function you wish to do: \n");
    
    switch (choice) {
        /*
        purpose:
        input:
        output:
        */
        case 1:
            printf("Enter the first number: ");
            scanf("%d", &intnum1);
            printf("Enter the second number: ");
            scanf("%d", &intnum2);
            printf("Your two numbers equals: %d\n", intnum1 + intnum2);
        /*
        purpose:
        input:
        output:
        */
        case 2:
            printf("Enter the first number: ");
            scanf("%f", &floatnum1);
            printf("Enter the second number: ");
            scanf("%f", &floatnum2);
            printf("Your two numbers equals: %.3f\n", floatnum1 * floatnum2);
        /*
        purpose:
        input:
        output:
        */
        case 3:
            printf("Enter a string: ");
            scanf("%s", input);
            int length = strlen(input);
            printf("Your string in reverse is: ");
            for (int i = length; i >= 0; i--) {
                printf("%c", input[i]);
            }
        /*
        purpose:
        input:
        output:
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
        /*
        purpose:
        input:
        output:
        */
        case 5:
            printf("Goodbye!\n");
            exit(0);
            break;
    }
    return 0;
}
