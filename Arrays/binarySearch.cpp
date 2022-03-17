#include <iostream>
using namespace std;
//Binary Searching only takes sorted array 
// Complexity of this is O(log2 n)

int binarySearch(int arr[], int size, int key)
{
    int first = 0, last = size;
    int mid;
   
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of your array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element of array : ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter key to find in array : "<<endl;
    cin >> key;
    cout <<"Element is at index : "<< binarySearch(arr, n, key);
    return 0;
}