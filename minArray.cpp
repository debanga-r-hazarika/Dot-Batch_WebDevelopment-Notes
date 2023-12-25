#include<iostream>
using namespace std;

int minArray(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    
    return min;
}                                                      
int main()
{
 int SumArray[5]={52,42,13,4,75};
 int Minimum = minArray(SumArray, 5);
 cout<<"Minimum number in the array is: "<<Minimum;   
}