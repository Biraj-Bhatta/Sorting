#include<stdio.h>
#include<stdlib.h>
void insersionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int prev=i-1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
}
void display(int arr[],int n){
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
    insersionSort(arr,n);
    display(arr,n);
    return 0;
}