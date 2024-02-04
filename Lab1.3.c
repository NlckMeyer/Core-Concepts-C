#include <stdio.h>
#include <string.h>

int main(){
    int choice;
    int intnum1, intnum2;
    float floatnum1, floatnum2;
    char input[100];

    printf("Menu\n");
    printf("\n1) Add two numbers\n");
    printf("\n2) Multiply two numbers\n");
    printf("\n3) Reverse a string\n");
    printf("\n4) Enter two words\n");
    printf("\n5) Exit\n");

    switch (choice) {
        case 1:
            printf("Enter the first number: ");
            scanf("%d", &intnum1);
            printf("Enter the second number: ");
            scanf("%d", &intnum2);
            printf("Your two numbers equals: %d\n", intnum1 + intnum2);
        case 2:
            printf("Enter the first number: ");
            scanf("%f", &floatnum1);
            printf("Enter the second number: ");
            scanf("%f", &floatnum2);
            printf("Your two numbers equals: %.3f\n", floatnum1 * floatnum2);
    }
}



