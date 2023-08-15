#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n,a,num=0;
	srand(time(0));
	n=rand()%100+1;
	do
	{
		cout<<"enetr number between 1 to 100"<<endl;
		cin>>a;
		num++;
		if(a<n)
		cout<<"num is low"<<endl;
	else if(a>n)
	cout<<"number is high"<<endl;
	else
	cout<<"number is correct"<<num<<"attemps\n"<<endl;
	}while(a!=n);
	return 0;
}
	
