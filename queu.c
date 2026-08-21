#include<stdio>
#define N 5
int front=-1;
int rear=-1;
int a[5];
using namespace std;
void Qinsert()
{
    int ele;
    if(rear==N-1)
    {
        printf("queue is overfull");
    }
    else
    {
        printf("enter ele=");
        scanf("%d", & ele);
        if(front==-1)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            printf("%d insert ele",ele)
        }
        rear=rear+1;
        a[5]=ele;
    }
}
void Qdeleted
{
    int ele;
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        ele=a[5];
        if(front==rear)
        {
            front=0;
            rear=0;
        }
        else
        {
            printf("%d deleted ele ",ele);
        }
        front=front-1;
    }
}
void dispaly()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%D",i);
        }    
    }
}