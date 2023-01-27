#include<iostream>
using namespace std;
int main()
{
    int result,a,b;
    cout<<"ENTER THE VALUE OF A"<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF B"<<endl;
    cin>>b;
    char op;
    cout<<"ENTER THE OPERATION TO BE PERFORM"<<endl;
    cin>>op;
    switch(op)
    {
    case'+':
    result=a+b;
    cout<<result<<endl;
    break;
    case'-':
    result=a-b;
    cout<<result<<endl;
    break;
    case'*':
    result=a*b;
    cout<<result<<endl;
    break;
    case'%':
    result=a%b;
    cout<<result<<endl;
    break;
    case'/':
    result= a/b;
    cout<<result<<endl;
    break;
    default:cout<<"shi se daal"<<endl;
    }
 return 0;
}