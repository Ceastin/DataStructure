#include <math.h>
#include <stdio.h>
 

void Insertion_Sort(int arr[], int n)
{
    int k,j;
    for (int i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = { 12, 11, 13, 5, 6,22,33,44,2,1 };
    int n = 10;
    Insertion_Sort(arr, n);
    print(arr, n);
 
    return 0;
}
