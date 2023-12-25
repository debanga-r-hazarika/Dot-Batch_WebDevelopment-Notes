#include<iostream>
using namespace std;

int extreme_array(int arr[], int size){
    int left=0;
    int right=size-1;

    while(left<=right){
        if (left==right)
        {
            cout<<arr[left]<<endl;
        }
        else
        {
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
        }
        left++;
        right--;
    }

}

int main()
{
 int arr[5]={1,2,3,4,5};
extreme_array(arr, 5);

}