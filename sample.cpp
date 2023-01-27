#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a,b,c,sum;
   cin>>a>>b>>c;
   if(1<=a&&b&&c<=1000)
   {
   sum=a+b+c;
   cout<<sum;
   }
   else
   cout<<"not satisfied";
   
    return 0;
}
