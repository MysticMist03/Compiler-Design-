#include<stdio.h>

int main (){
    int arr[100];
    int parr[100];
    int n;

    printf("The number of elements: ");
    scanf("%d", &n);


    printf("Enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }


    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in descending order: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
