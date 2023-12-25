// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int n = 9;

//     int temp = 90;

//     for (int i = n - 1; i < 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


#include <iostream>
using namespace std;

void shiftArray(int arr[], int n) {
    // Store the last element of array
    int temp = arr[n-1];

    // Shift array elements one position to the right
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    // Copy the last element into first position
    arr[0] = temp;
}

int main() {
    int num[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(num) / sizeof(num[0]);

    shiftArray(num, size);

    for (int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }

    return 0;
}