#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*next;
	int data;
}
*start=NULL,*ptr,*x,*back;
int count=0;
int ele;
int max;
int min;
void insert_begin()
{
	int ele;
	x=(struct node*)malloc(sizeof(struct node));
	printf("enter element:");
	scanf("%d",&ele);
	x->data=ele;
	if(start==NULL)
	{
		x->data=ele;
		start=x;
	}
	else
	{
		x->next=start;
		start=x;
	}
}
void insert_end()
{
	int ele;
	ptr=start;
	x=(struct node*)malloc(sizeof(struct node));
	printf("enter element=");
	scanf("%d",& ele);
	x->data=ele;
	x->next=NULL;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=x;
}
void insert_middle()
{
	int ele;
	printf("enter element after which you want to insert:");
	scanf("%d",& ele);
	ptr=start;
	x=(struct node*)malloc(sizeof(struct node));
	printf("enter element:");
	scanf("%d",& x->data);
	while(ptr!=NULL)
	{
		back=ptr;
		ptr=ptr->next;
		if(ptr->data==ele)
		{
			x->next=back->next;
			back->next=x;
			x->next=ptr;
			break;
		}
	}
}
void delete_begin()
{
	ptr=start;
	start=start->next;
	free(ptr);
}
void delete_end()
{
	ptr=start;
	while(ptr->next!=NULL)
	{
		back=ptr;
		ptr=ptr->next;
	}
	back->next=NULL;
	free(ptr);
}
void delete_middle()
{
	int ele;
	printf("enter element after which you want to delete");
	scanf("%d",ele);
	ptr=start;
	while(ptr!=NULL)
	{
		back=ptr;
		ptr=ptr->next;
		if(ptr->data==ele)
		{
			back->next=ptr->next;
			free(ptr);
		}
	}
}
void count_node()
{
	ptr=start;
	while(ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	printf("total node are %d",count);
}
void search_ele()
{
	ptr=start;
	printf("enter element after which you want to search");
	scanf("%d",& ele);
	while(ptr!=NULL)
	{
		if(ptr->data==ele)
		{
			printf("founded=%d",ele);
			break;
		}
		ptr=ptr->next;
	}
}
void max_data()
{
	ptr=start;
	max=ptr->data;
	while(ptr!=NULL)
	{
		if(ptr->data>max)
		{
			max=ptr->data;
		}
		ptr=ptr->next;
	}
	printf("max no is %d",max);
}
void min_data()
{
	ptr=start;
	min=ptr->data;
	while(ptr!=NULL)
	{
		if(ptr->data<min)
		{
			min=ptr->data;
		}
		ptr=ptr->next;
	}
	printf("min no is %d",min);
}
void display()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
	}
}
int main()
{
       int  choice;
       while(1)
       {
	printf("\n1.for insert at begin \n2.for display \n3.for insert at \4.for insert at middle \n5.delete from begin \n6.delete from end \n7.delete form middle ");
	printf("\n8.cout node \n9.search \n10.max \n11.min \12.exit\n");
	printf("enter choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: insert_begin();
			break;
		case 2: display();
			break;
		case 3: insert_end();
			break;
		case 4: delete_middle();
			break;
		case 5: delete_begin();
			break;
		case 6: delete_end();
			break;
		case 7: delete_middle();
			break;
		case 8: cout_node();
			break;
		case 9: search_ele();
			break;
		case 10: max_data();
			break;
		case 11: min_data();
			break;
		case 12: exit(0);
		default:printf("wrong choice");
	}
     }
}







