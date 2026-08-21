#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,x,y,z;
	clrscr();
	printf("enter n=");
	scanf("%d",&n);
	x=0;
	y=1;
	printf("\t%d\t%d",x,y);
	for(i=1;i<=n-2;i++)
	{
		z=x+y;
		printf("\t%d",z);
		x=y;
		y=z;
	 }
	 getch();
}