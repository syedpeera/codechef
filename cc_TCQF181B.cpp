#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,i,last_index,index,count;
	int y,n,median,result;
	cin>>t;
	while(t--)
	{
		count=0,index=0,result=0;
		cin>>n>>y;
		int a[n];
			//memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(y>n)
		{
			cout<<-1<<"\n";
		}
		else
		{
			last_index = n-1;
			sort(a,a+n);
			index = (n+1)/2 -1;
			median = a[index];
			count = (last_index - index + 1);
			if(count >= y)
			{
				cout<<0<<"\n";
			}
			else 
			{
				int temp = y - count;
				for(i=0;i<temp;i++)
				{
					result = result + (median-a[--index]);
				}
				cout<<result<<"\n";
			}
		}
	}
return 0;	
}
 

