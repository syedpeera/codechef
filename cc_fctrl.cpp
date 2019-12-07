#include<iostream>
#include<cmath>
using namespace std;
int fun(long long n)
{
	int i=5,count=0,temp;
	temp=n;
	while(temp!=0)
	{
		temp = floor(n/i);
		count = count + temp;
		i=i*5;
	}
	return count;
}
int main()
{
int t,i=0,a[100];
long long n;
cin>>t;
while(t--)
{
	cin>>n;
	cout<<fun(n)<<endl;
}
return 0;	
}
