#include<stdio.h>

int main() {

    int num , reverse = 0 , remainder;

    printf("Enter the number\n");
    scanf("%d", &num);

    while(num > 0) {

        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Remainder of a number = %d\n", reverse);


    return 0;
}
