#include<iostream>
using namespace std;
unsigned long long fact(unsigned long long n)
{
	int i;
	unsigned long long f=1;
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
	for(i=1;i<=n;i++)
	{
		f = f*i;
	}
	return f;
	}
}
int main()
{
int t;
cin>>t;
unsigned long long n;
while(t--)
{
	cin>>n;
	cout<<fact(n)<<endl;
}	
return 0;	
}
