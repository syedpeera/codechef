#include<iostream>
void mergeSort(unsigned long long a[],unsigned long long low,unsigned long long high);
void Merge(unsigned long long a[],unsigned long long low,unsigned long long high,unsigned long long mid);
using namespace std;
unsigned long long a[99999999],t;
int main()
{
int i;
cin>>t;
for(i=0;i<t;i++)
{
	cin>>a[i];   
}
mergeSort(a,0,t-1);
for(i=0;i<t;i++)
{
	cout<<a[i]<<endl;  
}
return 0;	
}
void mergeSort(unsigned long long a[],unsigned long long low,unsigned long long high)  
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergeSort(a,low,mid);  
		mergeSort(a,mid+1,high);
		Merge(a,low,high,mid);
	}
}
void Merge(unsigned long long a[],unsigned long long low,unsigned long long high,unsigned long long mid)           
{
	int i,j,k,temp[high-low+1];
	i=low;
	k=0;
	j=mid+1;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++)
	{
		a[i]=temp[i-low];
	}	
}
