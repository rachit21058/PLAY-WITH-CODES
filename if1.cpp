#include<iostream>
using namespace std;
int main()
{
    int n,money;
    cout<<"ENTER THE TOTAL AMOUNT"<<endl;
    cin>>n;
    money=n;
   
    while(money!=0)
    {
        if(money>=100){
        int a=money/100;
        cout<<"100 rs notes:"<<a<<endl;
        money=money-a*100;
        }
        if(money>=50)
        {
        int b=money/50;
        cout<<"50 rs notes:"<<b<<endl;
        money=money-b*50;
        }
     if(money>=20)
        {
        int c=money/20;
        cout<<"20 rs notes:"<<c<<endl;
        money=money-c*20;
        }
         if(money>=10)
        {
        int d=money/10;
        cout<<"10 rs notes:"<<d<<endl;
        money=money-d*10;
        }
         if(money>=1)
        {
        int e=money/1;
        cout<<"1 rs notes:"<<e<<endl;
        money=money-e*1;
        }
    }
    
    return 0;
        
    }