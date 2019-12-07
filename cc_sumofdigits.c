#include<stdio.h>
int main()
{
int n,i,r,test,sum;
scanf("%d",&test);
for(i=0;i<test;i++)	
{
	sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r = n%10;
		sum = sum + r;
		n = n/10;
	}
	printf("%d\n",sum);
}	
return 0;	
}
