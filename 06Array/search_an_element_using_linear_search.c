#include<stdio.h>

int main () {

    int arr[10] , num , loc = -1;

    printf("Enter an array\n");
    
    for(int i=0; i<=9; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter number to be searched = ");
    scanf("%d", &num);

    for(int i=0; i<=9; i++) {
        
        if(num == arr[i]) {
            loc = i+1;
            break;
        }
    }

    if(loc == -1) {
        printf("Number not found\n");
    }

    else {
        printf("Position = %d", loc);
    }




    return 0;
}
