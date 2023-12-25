#include <iostream>
using namespace std;

int kmToMiles(int n)
{
    int miles = n * 0.621371;
    return miles;
}
int main()
{
    cout << "Enter the Kilo Meter: ";
    int km;
    cin >> km;

    int miles = kmToMiles(km);
    cout << "The" << km << "Kilometer in mile is: " << miles << endl;
}