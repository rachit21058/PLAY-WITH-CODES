#include<iostream>
using namespace std;
int factorial(int);
int nCr(int,int);
int main()
{
int n,r;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"enter the value of r:" <<endl;
cin>>r;
cout<<"the answer is:"<< nCr(n,r)<<endl;
return 0;
}
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int nCr(int n,int r){
    int numerator=factorial(n);
    int denominator=factorial(r)*factorial(n-r);
    return numerator/denominator;
}
