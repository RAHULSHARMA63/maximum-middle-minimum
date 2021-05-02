#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the first number:";
	cin>>a;
	cout<<"enter the second number:";
	cin>>b;
	cout<<"enter the third number:";
	cin>>c;
	if(b<a&&c>a)
	{
		cout<<"\n c is maximum number:"<<c;
			cout<<"\n a is in middle number:"<<a;
				cout<<"\n b is minimum number:"<<b;
	}
    if(c<a&&b>a)
       {
		 cout<<"\n b is maximum number:"<<b;
			cout<<"\n a is in middle number:"<<a;
				cout<<"\n c is minimum number:"<<c;
	}
	if(c<b&&a>b)
	{
		cout<<"\n a is maximum number:"<<a;
			cout<<"\n b is in middle number:"<<b;
				cout<<"\n c is minimum number:"<<c;
	}
	if(a<b&&c>b)			
	{
    	cout<<"\n c is maximum number:"<<c;
			cout<<"\n b is in middle number:"<<b;
				cout<<"\n a is minimum number:"<<a;
	}
	if(a<c&&b>c)
	{
		cout<<"\n b is maximum number:"<<b;
			cout<<"\n c is in middle number:"<<c;
				cout<<"\n a is minimum number:"<<a;
}
	return 0;
}
