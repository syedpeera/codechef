#include<stdio.h>
#include<math.h>
int main()
{
unsigned int x;
float balance=3000,charge=0.50,y;
scanf("%d %f",&x,&y);
if( x%5==0 && x>0 && x<=2000 && y>=0 && y<=2000 && x<y && (x+charge)<y )
{
y=(y-charge-x);
printf("%.2f",y);
}
else
{
printf("%.2f",y);	
}
return 0;
}
