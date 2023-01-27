#include<iostream>
using namespace std;
int main()
{
    int n,count=0,i=1;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n)
    {
        if(n%i==0)
        count++;
        i=i+1;
    }
    if(count==2)
    {
        cout<<"the given number is prime";

    }
    else{
        cout<<"the no. is not prime";
    }
}
