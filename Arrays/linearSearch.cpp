#include <iostream>
using namespace std;
int linearSearch(int arr[] , int n , int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter size of your array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i+1<<" Element of your array : "<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to find in array: ";
    cin>>key;
    
    cout<<"Key is at index "<<linearSearch(arr,n,key);

    return 0;
}