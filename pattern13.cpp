#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    char count='A';
    while(i<=n)
    {
      int j=1;
        while(j<=n)
        {
            cout<<count;
            j=j+1;
            count++;
        }
        
        cout<<endl;
        i=i+1;
    }
}