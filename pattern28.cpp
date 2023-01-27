#include<iostream>
using namespace std;
int main()
{
   int a,count,i=1,n;
   cin>>n;
   count=n;
while(i<=n)
{   
   
   int j=1;
    while(j<=count)
    {
        
        cout<<j;
        j++;
        
    }
    a=count;
    while(a<n)
    {
    cout<<"**";
    a++;
    }
    int start=n-i+1;
    while(start)
    {
      cout<<start;
      start--;
    }
   cout<<endl;
   i++; 
  count--; 
}
}
