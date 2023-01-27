#include<iostream>
using namespace std;
int main()
{
    int a,n,i=1;
    
    cin>>n;
    
    while(i<=n)
    {
    int space=n-i;
    while(space)
    {
    cout<<" ";
    space--;
     }
      int j=1;
      
      while(j<=i)
        {
            
            cout<<j;
            j++;
            
        }
        int count=i-1;
        while(count)
        {
         cout<<count;   
         count--;

        }
        cout<<endl;
        i=i+1;
    }
}
