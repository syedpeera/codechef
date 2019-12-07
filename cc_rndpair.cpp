#include<iostream>
using namespace std;
int main()
{
int t,a[1000],n,j,i,temp,deno,count;
double probability;
cin>>t;
while(t--)
{
	temp=-999;
	cin>>n;
	count=0;
	deno=((n)*(n-1))/2;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				if(temp < a[i]+a[j])
				{	
					temp = a[i]+a[j];
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				if(temp == a[i]+a[j])
				{
					count++;
				}
			}
		}
	}
	probability = (double)count/(double)deno;
	cout<<probability<<endl;
}
return 0;	
}
