#include <iostream>
using namespace std;

int reverse_array(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

}

int main()
{
    int arr[100] = {10, 20, 30, 40, 50, 60,70,45};
    int size = 8;
    reverse_array(arr, size);

    // Print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}