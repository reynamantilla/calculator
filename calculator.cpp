#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double num1,num2;
    char operation,redo;
    do
    {
        cout<<" Please enter an operation which you like to calculate (+,-,*,/,s)";
        cin>>operation ;
        cout<<endl<<endl;
        cout<<" Please enter two numbers to apply your requested operation:";
        cout<<operation<<endl<<"1st num:";
        cin>>num1;
        cout<<"2nd num:" ;
        cin>>num2;
        cout<<endl;
        
        switch (operation)
        {
        //------calculating the requested equation for inputs-------------
        //-------at the same time printing the results on screen-----------
        case'+':
            cout<<"The addition of two numbers ("<<num1<<"+"<<num2<<"):";
            cout<<num1+num2<<endl;
            break;
        case'-':
            cout<<"The substraction of two numbers ("<<num1<<"-"<<num2<<"):";
            cout<<num1-num2<<endl;
            break;
        case'*':
            cout<<"The multiplication of two numbers ("<<num1<<"*"<<num2<<"):";
            cout<<num1*num2<<endl;
            break;
        case'/':
            cout<<"The division of two numbers ("<<num1<<"/"<<num2<<"):";
            if(num2==0)
            {
                cout<<"not valid"<<endl;
            }
            cout<<(num1/num2)<<endl;
            break;
        default:
            cout<<"unknown command"<<endl;

        }
        cout<<"enter y or x to continue:";
        cin>>redo;
        cout<<endl<<endl;
        
        if(redo=='x');
        {
        	cout<<"Thankyou for using this program :)";
		}
    }
    while(redo=='y');

    return 0;

}
