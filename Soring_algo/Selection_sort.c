#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void Selection_sort(int arr[], int n)
{
    int i, j, min, pos;
    for (i = 0; i < n - 1; i++)
    {
        min = arr[i];
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        swap(&arr[i], &arr[pos]);
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
    Selection_sort(arr, n);
    printf(" Sorted array :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}