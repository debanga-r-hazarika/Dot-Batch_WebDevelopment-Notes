#include <iostream>
using namespace std;

bool lineraSerch(int arr[], int size, int target, int& pos)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            pos = i+1;
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {2, 45, 3, 5, 4};
    int size = 5;
    int target = 5;
    int pos;

    bool ans = lineraSerch(arr, size, target, pos);

    if (ans == 1)
    {
        cout << "Target found at: " << pos << endl;
    }
    else
    {
        cout << "Target not found";
    }
}