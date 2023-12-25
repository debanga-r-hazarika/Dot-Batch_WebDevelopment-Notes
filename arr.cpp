#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
    }


    cout << "Elements after doubling:: ";
    cout << endl;
    
    for (int i = 0; i < n; i++)
    {

        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
}