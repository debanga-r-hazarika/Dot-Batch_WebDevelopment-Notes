#include <iostream>
using namespace std;

int CountBit(int n)
{   int count = 0;
    while (n > 0)
    {
        
        int bit = n % 2;
        if (bit == 1)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter The Number: ";
    cin >> num;

    int TotalCount = CountBit(num);
    cout <<TotalCount<< endl;
}