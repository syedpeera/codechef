#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int a[26],n,t,i,j,sum=0;
long long b[26];
char st[50000],ch=97;
cin>>t;
for(i=0;i<t;i++)
{
	for(j=0;j<26;j++)
	{
		a[j]=0;
		cin>>b[j];
	}
	cin>>st;
    for(i=0;i<26;i++)
    {	
		for(j=0;j<strlen(st);j++)
    	{	
    		if(st[j]==ch)
    		{
    		a[i]=1;
			}
		}
		ch=ch+1;
	}
	for(j=0;j<26;j++)
	{
		if(a[j]==0)
		{
			sum = sum + b[j];
		}
	}
	cout<<sum;
	if(strlen(st)<26)
	{
		
	}
}	
return 0;	
}
