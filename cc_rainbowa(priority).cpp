#include<iostream>
using namespace std;
int s,n,i,j,a[100],test;
int rainbowa(int a[],int n);
int main()
{
cin>>test;
for(s=0;s<test;s++)
{
//cout<<"Enter number of elements \n";
cin>>n;
//cout<<"Enter "<<n<<" elements ";
for(i=0;i<n;i++)
{
	cin>>a[i];
}
	if( !(rainbowa(a,n)) )
	{
		cout<<"no\n";
	}
	else
	{
		cout<<"yes\n";
	}
}
return 0;	
}
int rainbowa(int a[],int n)
{
	if(a[0]!=1)
	{
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=0 || a[i]>7)
		{
			return 0;
		}
	}	
	for(i=0,j=n-1;i<n/2,j>n/2;i++,j--)
	{
		if(a[i]!=a[j])
		{
			return 0;
		}
		if(a[n/2]!=7)
		{
			return 0;
		}
		if( (a[i]==a[i+1]) || (a[i]+1==a[i+1]) )
		{
			
		}
		else
		{
			return 0;
		}
		
	}
return 1;
}

