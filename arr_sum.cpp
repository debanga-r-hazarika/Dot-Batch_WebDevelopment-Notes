#include<iostream>
using namespace std;
    
int main()
{
    int arr[10];
    int m;

    cout<<"Enter the size of the array: ";
    cin>>m;

    cout<<"Enter "<<m<<" elements of the array: ";
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }

    int sum =0;
    for(int i=0; i<m; i++)
    {
        sum += arr[i];
    }

    cout<<"Sum of the array is: "<<sum;

    return 0;
}