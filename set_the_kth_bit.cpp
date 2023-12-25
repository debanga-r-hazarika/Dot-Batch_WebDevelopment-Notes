#include <iostream>
using namespace std;
int setTheKthBit(int n, int k)
{
    int mask = (1 << k);
    return (n | mask);
}
int main()
{
    int n, k;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the kth bit : ";
    cin >> k;

    int ans = setTheKthBit(n, k);
    cout << "The number after set the kth bit is : " << ans << endl;
}