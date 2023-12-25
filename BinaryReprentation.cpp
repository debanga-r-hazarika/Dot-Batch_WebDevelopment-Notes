#include <iostream>
using namespace std;

void printBinary(int num)
{
    if (num > 1)
    {
        printBinary(num >> 1);
    }

    cout << (num & 1);
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Binary representation of " << num << " is ";
    printBinary(num);
    cout << endl;

    return 0;
}