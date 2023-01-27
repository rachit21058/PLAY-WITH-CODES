#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    char count='A';
    cin>>n;
    while(i<=n)
    {
      int j=1;
        while(j<=n)
        {
            char ch=count+j-1;
            cout<<ch;
            j=j+1;
        }
        count++;
        cout<<endl;
        i=i+1;
    }
}