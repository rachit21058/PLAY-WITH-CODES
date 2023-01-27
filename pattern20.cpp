#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    int count=n;
    while(i<=n)
    {
    
      int j=1;
      while(j<=count)
        {
            
            cout<<"*";
            j++;
        }
        count--;
        cout<<endl;
        i=i+1;
    }
}
