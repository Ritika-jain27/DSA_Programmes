#include <stdio.h>
void insertion_sort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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