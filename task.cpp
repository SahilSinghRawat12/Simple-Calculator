#include<bits/stdc++.h>
using namespace std;
int main()
{
    char op;
    double num1,num2;

    cout<<"Enter the first number : ";
    cin>>num1;
    
    cout<<"Enter the operator (+, -, *, / ) : ";
    cin>>op;
   
    cout<<"Enter the second number : ";
    cin>>num2;

    switch(op)
    {
        case '+':
             cout<<num1<<" + "<<num2<<" = "<<num1+num2;
             break;

        case '-':
             cout<<num1<<" - "<<num2<<" = "<<num1-num2;
             break;

        case '*':
             cout<<num1<<" * "<<num2<<" = "<<num1*num2;
             break;

        case '/':
             cout<<num1<<" / "<<num2<<" = "<<num1/num2;
             break;

        default : 
              cout<<"!<----INVALID INPUT---->! "<<endl;
              cout<<"Select from (+, -, *, /)"<<endl;
              break;
    }

}