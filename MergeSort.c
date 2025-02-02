#include <stdio.h>
void mergeSort(int arr[], int start, int end);
void merge(int arr[], int start, int mid, int end);
void display(int arr[], int length);
int main()
{
    int arr[14] = {1, 21, 12, 23, 34, 43, 45, 56, 67, 89, 90, 9, 87, 65};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Without Sorting: \n");
    display(arr,length);
    printf("Sorted Array: \n");
    mergeSort(arr, 0, length - 1);
    display(arr, length);
    return 0;
}
void display(int arr[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
void merge(int arr[], int start, int mid, int end)
{
    int array[end];
    int i = start;
    int k = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            array[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            array[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        array[k] = arr[i];
        k++;
        i++;
    }
    while (j <= end)
    {
        array[k] = arr[j];
        k++;
        j++;
    }
    for (int i = start; i <= end; i++)
    {
        arr[i] = array[i];
    }
}