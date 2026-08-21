#include<stdio.h>
#include<conio.h>
void merge(int a[],int low,int mid, int high);
void divide(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		divide(a,low,mid);
		divide(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i,j,k ,m=mid-low+1,n=high-mid;
	int b[100];
	for(i=0;i<m;i++)
		a[i]=a[low+i];
	for(i=0;i<n;i++)
		b[i]=a[mid+i+1];
	i=j=0;
	k=low;
	while(i<m||j<n)
	{
		if(i>=m)
		{
			a[k++]=b[j++];
			continue;
		}
		if(j>=n)
		{
			a[k++]=a[i++];
			continue;
		}
		if(a[i]<b[j])
			a[k++]=a[i++];
		else
			a[k++]=b[j++];
	}
}
void main()
{
	int i,n,a[10];
	printf("how many element is the array?");
	scanf("%d",& n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	divide(a,0,n-1);
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	getch();

}
