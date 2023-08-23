#include<iostream>
using namespace std;
int main()
{
    char op;
	int a,b;
//operator `+,-,/,*;
	cout<<"Enter numbers"<<endl;
	cin>>a>>b;
	cout<<"Select operator:+,-,*,/:"<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
		{
		
		cout<<"Addition is"<<a<<"+"<<b<<"="<<a+b<<endl;
	}
	break;
		case'-':
	{
	
		cout<<"substraction is"<<a<<"-"<<b<<"="<<a-b<<endl;
}
break;
case'*':
{
	cout<<"multiplication is"<<a<<"*"<<b<<"="<<a*b<<endl;
}
break;
case'/':
{
	cout<<a<<"/"<<b<<"="<<a/b<<endl;
}
break;
	
	default:
		cout<<"default operator";
		
		}
		return 0;
}
