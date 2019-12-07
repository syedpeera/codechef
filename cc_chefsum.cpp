#include<iostream>
using namespace std;
int prefixsum(int k);
int suffixsum(int j);
int main()
{
int s,t,n,i,temp=0;
long long a[100000],temp;
cin>>t;
for(s=1;s<=t;s++)
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];	
	}
	for(i=1;i<=n;i++)
	{
		temp = prefixsum(i) + suffixsum(i);
		if(temp)	
	}
}
return 0;	
}
int prefixsum(int k)
{
	
}
int suffixsum(int j)
{
	
}
