#include<stdio.h>
#include<conio.h>
int binary_search(int a[],int n,int ele)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(ele==a[mid])
			return(mid);
		if(ele>=a[mid])
			low=mid+1;
		else
		     high=mid-1;
	}
	return(-1);
}
void main()
{
	int a[5],i;
	int flag=-1,ele,n;
	clrscr();
	printf("enter how many element n=");
	scanf("%d",& n);
	for(i=0;i<n;i++)
	{
		printf("enter no=");
		scanf("%d",& a[i]);
	}
	printf("enter element to search=\n");
	scanf("%d",& ele);
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	flag=binary_search(a,n,ele);
	if(flag==-1)
	printf("not");
	else
	printf("\n element found at ",flag+1);
	getch();
}




