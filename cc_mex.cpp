#include<iostream>
using namespace std;
long long array[200000];
long long n,k,array2[200000];
int main()
{
int t,i,j,flag,h,temp,count,flag1,d,flag3;
cin>>t;
while(t--)
{
count=0,i=0,flag=0,h=0,flag1=0,d=0,flag3=0;
cin>>n>>k;	
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	if(n==1 && k==0 && array[0]==0)
	{
		cout<<1<<endl;
	}
	else if(n==1 && k==0 && array[0]==1)
	{
		cout<<0<<endl;
	}
	else
	{
	if(k>0)
	{
		temp=k;
	//	while(k--)
	//	{
			j=0;
			d=0;
			while(h!=n)//for(h=0;h<n;h++)
			{
				flag1=0;
				for(i=0;i<n;i++)
				{
					if(array[i]==j)
					{
						flag1++;	
						break;
					}	
				}
				if(flag1==0)
				{
					flag3++;
					array2[d++]=j;
				}	
				j++;
				h++;
			}
	//	}	
		k=temp;
		if(flag3!=0)
		{
			for(i=n;d--;i++)
			{
				array[i]=array2[d];
			}
		}
		else
		{
			for(i=n;temp--;i++)
			{
				array[i]=i;	
			}	
		}
		i=0;
		while(i!=n+k)//for(i=0;i<=n+k;i++)
		{
			flag=0;
			for(j=0;j<k+n;j++)
			{
				if(array[j]==i)
				{
					flag++;
					break;	
				}
			}
			if(flag==0)
			{
				count=i;
				break;
			}
			i++;
		}
	}
	else
	{
		for(i=0;i<=n+1;i++)
		{
			flag=0;
			for(j=0;j<n;j++)
			{
				if(array[j]==i)
				{
					flag++;
					break;	
				}
			}
			if(flag==0)
			{
				count=i;
				break;
			}
		}
	}
	cout<<count<<endl;
	}
}	
return 0;	
}
