#include <iostream>
using namespace std;

/**
 * @brief Prints all the digits of an integer in reverse order.
 * 
 * @param n The integer whose digits are to be printed.
 * @return int Returns nothing.
 */
int printAlldigits(int n)
{
    while (n)
    {
        int dgt = n % 10;
        cout << dgt << endl;
        n = n / 10;
    }
}
int main()
{
    int n;
    // cout << "Enter Integer: ";
    // cin >> n;
    // printAlldigits(n);
    sizeof(int);
}