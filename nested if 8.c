#include <stdio.h>

int main() {
    int number = 10;

    if (number > 0) {
        printf("The number is positive.\n");

        if (number % 2 == 0) {
            printf("The number is even.\n");
        }
        else
            {
            printf("The number is odd.\n");
        }
    }
    else
        {
        if (number < 0)
         {
            printf("The number is negative.\n");
        } else {
            printf("The number is zero.\n");
        }
    }

    return 0;
}
