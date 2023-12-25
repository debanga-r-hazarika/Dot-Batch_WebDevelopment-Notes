#include<iostream>
using namespace std;

int main()
{
    const int SIZE = 50;
    int arr[SIZE];

    cout << "Enter " << SIZE << " elements: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements in the array: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}