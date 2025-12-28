#include<stdio.h>

int main() {

    int num;

    printf("Enter the number for check even or odd\n");
    scanf("%d", &num);

    if((num/2)*2 == num) {

        printf("This number is even\n");
    }

    else {

        printf("This number is odd\n");
    }



    return 0;
}
