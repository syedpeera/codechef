#include<iostream>
using namespace std;
int main()
{
int t,n,array[500],i,temp1,temp2,count1,count2;
long long p,result;
cin>>t;
while(t--)
{
count1=0,count2=0;
cin>>n>>p;
	temp1=p/2;
	temp2=p/10;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<n;i++)
	{
		if(array[i]>=temp1)
		{
			count1++;
		}
		if(array[i]<=temp2)
		{
			count2++;
		}
	}
	if(count1==1 && count2==2)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}	
return 0;	
}
