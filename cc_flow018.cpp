#include<iostream>
using namespace std;
int main()
{
int t,n,i;
long long f=1;
cin>>t;
while(t--)
{
	f=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f = f * i;
	}
	cout<<f<<endl;
}
return 0;	
}
