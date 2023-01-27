#include<iostream>
using namespace std;
int main()
{
    long int n,fact=1,num=1;
    cout<<"enter the value upto which print"<<endl;
    cin>>n;
    while(num<=n)
    {
        fact=fact*num;
        num++;
    }
    cout<<"the factorial is:"<<fact;
    return 0;
}