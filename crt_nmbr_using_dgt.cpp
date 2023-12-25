#include <iostream>
using namespace std;

int CrtNumber(int n){
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter digits: "<<endl;
        int dgt;
        cin>>dgt;
        num=num*10+dgt;
        cout<<"Number created so far: "<<num<<endl;
    }
    
    return num;
}

int main()
{
    int toltalNumofDgt;
    cout << "Enter the No of digits: ";
    cin >> toltalNumofDgt;
    int num=CrtNumber(toltalNumofDgt);
    cout<<"Number created by digits: "<<num<<endl;
}