#include <stdio.h>

int main() {

    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    if(num & 1) {

        printf("This number is odd\n");
    }

    else {

        printf("This number is even\n");
    }




    return 0;
}
