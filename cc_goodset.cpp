#include<iostream>
using namespace std;
int main()
{
int t,n,i,j;
cin>>t;
while(t--)
{
	i=1;
	cin>>n;
	j=1;
	/*for(i=500-j;i<=499;j++)
	{

	}
	*/
	for(i=1;i<=n;i=i+2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
return 0;
}
