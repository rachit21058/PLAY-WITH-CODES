#include<iostream>
using namespace std;
int main()
{
    int i=1,count,n;
    cin>>n;
    while(i<=n)
    {
       int j=1;
       count=i;
        while(j<=i)
        {
         cout<<i+j-1;
         //cout<<count;
         //count++;
         j++;
        }
        cout<<endl;
        i++;
    }
}