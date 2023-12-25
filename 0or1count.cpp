#include<iostream>
using namespace std;
int countzeros(int arr[], int n)
{
    int countZero = 0;
    int countOne = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            countZero++;
            
        }
        if(arr[i]==1)
        {
            countOne++;
            
        }
    }
    cout<<"Zero: "<< countZero<<endl; 
    cout<<"One: "<< countOne; 
}   
int main()
{
 int arr[5]={0,0,1,0,1};
 countzeros(arr, 5);

}