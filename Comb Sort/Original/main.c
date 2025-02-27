#include <stdio.h>
#include <stdbool.h>

void combSort(int arr[], int n)
{
    int gap = n;
    bool swapped = true;

    while (gap != 1 || swapped)
    {
        gap = (gap * 10) / 13;
        if (gap < 1)
            gap = 1;

        swapped = false;
        for (int i = 0; i < n - gap; i++)
        {
            if (arr[i] > arr[i + gap])
            {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                swapped = true;
            }
        }
    }
}

int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    combSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
