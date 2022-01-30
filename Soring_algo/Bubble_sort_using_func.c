#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void bubble_sort(int arr[], int n)
{
    int i, j, flag;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(&arr[j - 1], &arr[j]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int n, i, num;
    printf("Enter the size of array");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d element of array :\n", i + 1);
        scanf("%d", &num);
        arr[i] = num;
    }

    bubble_sort(arr, n);
    printf(" Sorted array :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}