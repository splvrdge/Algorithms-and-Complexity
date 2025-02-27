#include <stdio.h>

void gnomeSort(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] >= arr[i + 1])
        {
            i++;
        }
        else
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i--;
            if (i == 0)
                i = 1;
        }
    }
}

int main()
{
    int arr[] = {34, 2, 10, -9};
    int n = sizeof(arr) / sizeof(arr[0]);
    gnomeSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
