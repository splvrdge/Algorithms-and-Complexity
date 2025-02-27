#include <stdio.h>

void strandSort(int arr[], int n)
{
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (j = 0; j < n - 1; j++)
        if (arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
}
int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    strandSort(arr, n);
    printf("Sorted array: \n");
    {
    }

    return 0;
}
