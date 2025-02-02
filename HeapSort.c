#include<stdio.h>
void swap(int *m ,int *n);
void maxheapify(int arr[],int i,int size);
void display(int arr[],int size);
void maxheap(int arr[],int beg,int end);
void heapsort(int arr[],int size);
int main(){
    int i,n=10;
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter data to be entered: ");
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Without sorting: \n");
    display(arr,size);
    maxheap(arr,0,size-1);
    heapsort(arr,size-1);
    printf("After Sorting: \n");
    display(arr,size);
    return 0;
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
void swap(int *m,int *n){
    int temp=*m;
    *m=*n;
    *n=temp;
}
void maxheap(int arr[],int beg,int end ){
    int i;
    for(i=end/2;i >= beg;i--){
        maxheapify(arr,i,end);
    }
}
void maxheapify(int arr[],int i,int size){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left <= size && arr[left] > arr[largest]){
        largest=left;
    }
    if(right <= size && arr[right] > arr[largest]){
        largest=right;
    }
    if(largest != i){
        swap(&arr[i],&arr[largest]);
        maxheapify(arr,largest,size);
    }
}
void heapsort(int arr[],int size){
    int i;
    for(i=size; i >= 0;i--){
        swap(&arr[0],&arr[i]);
        maxheapify(arr,0,i-1);
    }
}