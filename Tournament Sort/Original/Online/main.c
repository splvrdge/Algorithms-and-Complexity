#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int compare(int a, int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return 1;
    else
        return 0;
}

void tournamentSort(int arr[], int n)
{
    int i, j, k, p, q, r, s, t, u, v, w;
    int *aux = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        aux[i] = i;

    for (i = 0; i < n - 1; i++)
    {
        p = i;
        q = i + 1;
        if (compare(arr[aux[p]], arr[aux[q]]) > 0)
        {
            swap(&aux[p], &aux[q]);
        }
        for (j = i + 2; j < n; j += 2)
        {
            r = j;
            s = j + 1;
            if (s < n && compare(arr[aux[r]], arr[aux[s]]) > 0)
            {
                swap(&aux[r], &aux[s]);
            }
            if (compare(arr[aux[p]], arr[aux[r]]) > 0)
            {
                swap(&aux[p], &aux[r]);
            }
        }
        for (k = p; k < n; k += 2)
        {
            t = k;
            u = k + 1;
            if (u < n && compare(arr[aux[t]], arr[aux[u]]) > 0)
            {
                swap(&aux[t], &aux[u]);
            }
            if (compare(arr[aux[p]], arr[aux[t]]) > 0)
            {
                swap(&aux[p], &aux[t]);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[aux[i]];
    }
    free(aux);
}

int main()
{
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    tournamentSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
