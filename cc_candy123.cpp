#include<iostream>
using  namespace std;
int main()
{
int t,s,a,b,temp1,temp2,i,sum1,sum2,j,it1,it2;
cin>>t;
for(s=0;s<t;s++)
{
cin>>a>>b;
temp1=a;
temp2=b;
it1=0,it2=0;
i=1;
sum1=i;
j=2;
sum2=j;
while(sum1<a || sum2<b)
{
	//it1++;
	i=i+2;
	sum1=sum1+i;
	if(sum1==a)
	{
		cout<<"Limak"<<endl;
		break;
	}
	else if(sum1>a)
	{
		cout<<"Bob"<<endl;
		break;
	}
	//it2++;
	j=j+2;
	sum2=sum2+j;
	if(sum2==b)
	{
		cout<<"Bob"<<endl;
		break;
	}
	else if(sum2>b)
	{
		cout<<"Limak"<<endl;
		break;
	}
}
//cout<<sum1<<endl;
//cout<<sum2<<endl;
if(a==1 && b==1)
{
	cout<<"Limak"<<endl;
}
else if(a==1 && b==2)
{
	cout<<"Bob"<<endl;
}
}		
return 0;	
}
