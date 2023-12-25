#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        sum += arr[i];
    }
}
int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nSum of the array is: " << sum(arr, n);
}