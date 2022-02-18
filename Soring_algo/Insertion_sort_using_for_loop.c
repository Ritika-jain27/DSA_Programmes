#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void insertion_sort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            else
            {
                break;
            }
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
    insertion_sort(arr, n);
    printf(" Sorted array :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}