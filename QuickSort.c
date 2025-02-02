#include<stdio.h>
#include<stdlib.h>
void swap(int *m,int *n);
void QuickSort(int arr[],int length);
void quick_recursion(int arr[],int low,int high);
int partition(int arr[],int low,int high);
void display(int arr[],int length);

int main(){
    int arr[]={12,1,2,11,121,123,321,234,32,43,45,0,56,90,34,56};
    int length=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,length);
    display(arr,length);
    return 0;
}

void swap(int *m,int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}
void display(int arr[],int length){
    for(int i=0;i<length;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
void QuickSort(int arr[],int length){
    quick_recursion(arr,0,length-1);
}
void quick_recursion(int arr[],int low,int high){
    if (low<high){
        int pivot;
        pivot=partition(arr,low,high);
        quick_recursion(arr,low,pivot-1);
        quick_recursion(arr,pivot+1,high);
    }
}
int partition(int arr[],int low,int high){
    int pivotValue=arr[high];
    int i=low,j;
    for(j=low;j< high;j++){
        if(arr[j] <= pivotValue){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[high]);
    return i;
}