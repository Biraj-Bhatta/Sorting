#include<stdio.h>
#include<stdlib.h>
void swap(int *m,int *n){
        int temp;
        temp=*m;
        *m=*n;
        *n=temp;
}
void Bubblesort(int arr[],int n){
    int isSwap=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                isSwap=1;
            }
        }
        if(isSwap==0){
            printf("The array is already sorted.\n");
            return;
        }
    }    
}
void dispaly(int arr[],int n){
    printf("The sorted array is: \n");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n=10;
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter data to be entered: ");
        scanf("%d",&arr[i]);
    }
    Bubblesort(arr,n);
    dispaly(arr,n);
    return 0;
}