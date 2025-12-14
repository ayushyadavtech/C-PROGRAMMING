#include<stdio.h>

int main() {


    int length;
    printf("enter the length : ");
    scanf("%d", &length);

    int nums[length];

    for(int i=0; i<length; i++) {
        scanf("%d", &nums[i]);
    }

    int max = nums[0] , min = nums[0];

    for (int i=0 ; i<length; i++) {
        if(nums[i] > max) {
            max = nums[i];
        }
    }

    for(int i=0; i<length; i++) {
        
        if(nums[i] < min) {
            min = nums[i];
        }
    }

    printf("maximum number is %d\n", max);
    printf("minimum number is %d\n", min);

    return 0;
}
