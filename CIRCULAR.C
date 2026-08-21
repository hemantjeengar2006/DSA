#include<stdio.h>
#include<conio.h>
#define N 5
int front=-1;
int rear=-1;
int a[N];
void Qinsert()
{
	int ele;
	if(front==(rear+1)%N)
	{
		printf("circluar Queue is full");
		getch();
	}
	else
	{
		printf("enter ele=");
		scanf("%d",& ele);
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else
		rear=(rear+1)%N;
		{
			printf("%d insert ele", ele);
		}
		a[rear]=ele;
	}
}
void Qdelete()
{
	int ele;
	if((front==-1)&&(rear==-1))
	{
		printf("circular Queue is empty");
		getch();
	}
	else
	{
		ele=a[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		front=(front-1)%N;
		{
			printf("%d deleted ele=",ele);
		}
	 }
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("circular Queue is empty");
		getch();
	}
	else
	{
		if(rear<front)
		{
			for(i=front;i<N;i++)
			{
				printf("\t%d",a[i]);
			}
			for(i=0;i<rear;i++)
			{
				printf("\n%d",a[i]);
			}
		}
		else
		{
			for(i=front;i<rear;i++)
			{
				printf("\n%d",a[i]);
			}
		 }
	}

}
void main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("\n1.rear");
		printf("\n2.front");
		printf("\n3.display");
		printf("\n4.exit");
		printf("enter choice=");
		scanf("%d",& choice);
		switch(choice)
		{
			case 1: Qinsert();
				break;
			case 2: Qdelete();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
		       default: printf("wrong choice");
		}
	}
getch();
}