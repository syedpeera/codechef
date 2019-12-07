#include<iostream>
using namespace std;
class str
{
	public:
	char name[100];	
};
int main()
{
int t,n,m,i,j,fine1,fine2,ans;
str s[100];
cin>>t;
while(t--)
{
	fine1 = 0;
	fine2 = 0;
	ans = 0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s[i].name;
	}
	for(i=0;i<n;i++)
	{
		if(s[i].name[m-1] == 'R' && s[i+1].name[0] == 'R' )
		{
			fine1++;
		}
		if(s[i].name[m-1] == 'G' && s[i+1].name[0] == 'G')
		{
			fine2++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(s[i].name[j] == 'R' && s[i].name[j+1] == 'R')
			{
				fine1++;
			}
			if(s[i].name[j] == 'G' && s[i].name[j+1] == 'G')
			{
				fine2++;
			}
		}
	}
		fine1++;
		fine2++;
		fine1 = (fine1)/2;
		fine2 = (fine2)/2;
		ans = (fine1)*5 + (fine2)*3;
cout<<ans<<endl;
}
return 0;
}
