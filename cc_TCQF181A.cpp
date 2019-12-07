#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void swap(int *xp,int*yp);
int max(int a, int b);
int count_1=0,count_2=0;
int main()
{
	int t,i,j,a[100000],b[100000],c[100000],length;
	long long n;
	cin>>t;
	while(t--)
	{
		count_1=0,count_2=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		length = n/2;
		for(i=0,j=0;i<=n;i=i+2)
		{
			b[j++] = a[i];
		}
		for(i=1,j=0;i<=n;i=i+2)
		{
			c[j++] = a[i]; 
		}
		heapSort(b,length);
		heapSort(c,length);
		for(i=0;i<length;i++)
		{
			a[i] = max(b[i],c[i]);
		}
		for(i=0;i<length;i++)
		{
			if(a[i] == 1)
			{
				count_1++;
			}
			else if(a[i] == 2)
			{
				count_2++;
			}
		}
		if(count_1 > count_2)
		{
			cout<<1<<"\n";
		}
		else if(count_1 < count_2)
		{
			cout<<2<<"\n";	
		}
		else
		{
			cout<<"draw"<<"\n";
		}
	}
return 0;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;  
    int l = 2*i + 1;  
    int r = 2*i + 2;  
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
 
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 
        heapify(arr, n, largest);
    }
}
 
void heapSort(int arr[], int n)
{
 
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
 
    for (int i=n-1; i>=0; i--)
    {
 
        swap(arr[0], arr[i]);
 
 
        heapify(arr, i, 0);
    }
}
void swap(int *xp,int*yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
int max(int a, int b)
{
	if(a>b)
	{
		return 1;
	}
	else if(a<b) 
	{
		return 2;
	}
	else
	{
		return 0;
	}
}
