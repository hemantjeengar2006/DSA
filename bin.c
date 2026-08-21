#include<stdio.h>

int main()

{

char ch;

int a[20],start, end, mid, n,i,data;


printf("\n How many items you want to enter in array? ");

scanf("%d",&n);

printf("\n Enter elements in Ascending Order \n");

for(i=0; i<n; i++)

{

printf("Enter element %d: ", i+1);

scanf("%d",&a[i]);

}

do

{

printf("\n Enter the element to be searched: ");

scanf("%d",&data);

start= 0;

end= n-1;

mid=(start+end)/2;

while(data!=a[mid] && start<=end)
{

if(data > a[mid])

start= mid+1;

else

end= mid-1;

mid=(start+end)/2;

}

if(data = a[mid])

printf("\n data %d is found at position %d", data, mid+1);

if(start>end)

printf("\n Data %d is not found in the array \n", data);

printf("\n Press<Y/y> to continue...");

fflush(stdin);
scanf("%c",&ch);

} while(ch=='Y' || ch=='y');


}


