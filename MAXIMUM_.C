#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,n,max;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter element=");
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if (max<a[i])
		   max=a[i];
	}
	printf("\nelement are= \n");

	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}

	printf("\nThe maximum element is=%d",max);
	getch();
}