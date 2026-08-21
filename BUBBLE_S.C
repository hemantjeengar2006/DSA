#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	    }
	}
}
void main()
{
	int i,n,a[10];
	clrscr();
	printf("how many element in the array?");
	scanf("%d",& n);
	printf("\nenter array=");
	for(i=0;i<n;i++)
	scanf("%d",& a[i]);
	bubble_sort(a,n);
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	printf("\n");
	getch();
}

