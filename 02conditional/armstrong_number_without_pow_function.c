#include <stdio.h>

int main() {

    int num, temp, remainder;
    int count = 0, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    if (temp == 0)
        count = 1;

    else {
        while (temp > 0) {
            count++;
            temp /= 10;
        }
    }

    temp = num;

    while (temp > 0) {
        remainder = temp % 10;

        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (num == 0)
        sum = 0;

    if (sum == num)
        printf("%d is an Armstrong Number\n", num);

    else
        printf("%d is not an Armstrong Number\n", num);

    return 0;
}
