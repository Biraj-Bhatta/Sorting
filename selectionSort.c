#include<stdio.h>
#include<stdlib.h>
void swap(int *m,int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(&arr[i],&arr[smallest]);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n=10,i;
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter data to be entered: ");
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    display(arr,n);
    return 0;
}