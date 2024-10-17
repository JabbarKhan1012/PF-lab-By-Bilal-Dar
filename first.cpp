#include<iostream>
using namespace std;
int main()
{
    int num_1;
    int num_2;
    char sign;
    cout<<"Enter the first number::";
    cin>>num_1;
    cout<<"Enter the second number::";
    cin>>num_2;
    cout<<"Enter the sign of an operation you want to perform::";
    cin>>sign;
    int sum;
    sum=num_1+num_2;
    int difference;
    difference=num_1-num_2;
    int product;
    product=num_1*num_2;
    int divide;
    divide=num_1/num_2;
    if(sign =='+')
    {
        cout<<"The addition of both the number="<<sum<<endl;
    } 
    else if(sign=='-')
    { 
        cout<<"The difference of  both the number="<<difference<<endl;
    }
    else if(sign=='*' )
    {
        cout<<"The product of  both the number="<<product<<endl;
    }
    else if(sign=='/' )
    {
        cout<<"The division of  both the number="<<divide<<endl;
    }
    else
    {
        cout<<"invalid sign";
    }


}
