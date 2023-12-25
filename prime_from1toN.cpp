#include <iostream>
using namespace std;
int checkPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;

    cout << "Prime numbers are: ";

    for (int i = 0; i < n; i++)
    {
        if (checkPrime(i))
        {
            cout << i << " ";
        }
    }
}