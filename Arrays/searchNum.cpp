#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    int num;
    cout << "Enter the size of your array: ";
    cin >> n;
    int arr[n];
    int temp=0;
    cout<<"Enter elements in array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number you want to find in the array: ";
    cin >> num;

    for (int j = 0; j < n; j++)
    {
        if (num == arr[j])
        {
            cout << "number is at position: " << j + 1 << endl;
            temp=1;
            break;
        }
    }

    
        if(temp==0)
        {
            cout<<" Number is not in array : ";
            return -1;
        }
    return 0;
}