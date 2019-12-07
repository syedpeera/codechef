#include<iostream>
using namespace std;

int main()
{
int n,t;
int count=0;
long long k,temp;
cin>>n;
cin>>k;
t=n;
while(t--)
{        
	cin>>temp;
	if(temp%k==0)
	{
		count++;	
	}	
}
cout<<count;
return 0;	
}
