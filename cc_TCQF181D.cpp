#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,n,i,a[1000],k1,k2,big1,big2;
	char f1[10],f2[10],compute[10];
	cin>>t;
	while(t--)
	{
		big1=-1;
		big2=-1;
		cin>>n;
		memset(f1,0,sizeof(f1));
		memset(f2,0,sizeof(f2));
		memset(compute,0,sizeof(compute));
		cin>>f1>>f2;
		for(i=0;i<n;i++)
		{
			cin>>compute;
			cin>>a[i];
			if(!strcmp(f1,compute))	
			{
				k1 = a[i];
			}
			if(!strcmp(f2,compute))	
			{
				k2 = a[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>big1)
			{
				big1 = a[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>big2 && a[i]!=big1)
			{
				big2 = a[i];
			}
		}
		if( (k1 == big1 || k1 == big2) && (k2 == big1 || k2 == big2) )
		{
			cout<<"right\n";
		}
		else
		{
			cout<<"wrong\n";
		}
	}
return 0;
}
