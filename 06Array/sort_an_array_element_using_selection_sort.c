#include<stdio.h>

int main() {

    int arr[50], num , temp;

    printf("Enter no. of elements to be enter\n");
    scanf("%d", &num);

    printf("Enter array\n");
        
    for(int i=0; i<num; i++) {

        scanf("%d", &arr[i]);
    }

    printf("sort the array using selection sort\n");

    for(int i=0; i<num; i++) {

        int min = i;

        for(int j=i+1; j<num; j++) {
                
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i=0; i<num; i++) {

        printf("%d\n", arr[i]);
    }
 


    return 0;
}
