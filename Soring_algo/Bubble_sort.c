#include <stdio.h>

int main()
{
	int n, num, i, j, temp, flag;
	printf("Enter the size of array");
	scanf("%d", &n);
	int arr[n];

	for (i = 0; i < n; i++)
	{
		printf("Enter %d element of array :\n", i + 1);
		scanf("%d", &num);
		arr[i] = num;
	}

	for (i = 0; i < n - 1; i++)
	{
		flag = 0;
		for (j = 1; j < n - i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}

	printf(" Sorted array:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}