#include<iostream>
using namespace std;
    
int main()
{
 int m=0;
 int&n = m;

 cout<<"Enter your choice: ";
 cout<<endl;
 cin>>m;

 cout <<n<<endl;

 n++;

 cout << m;

}