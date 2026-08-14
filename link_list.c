#include<stdio.h>                    //error counting in //
#include<stdlib.h>//<alloc.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;
//function decleration/prototype
void add_front(void);
void add_last(void);
void del_front(void);
void del_last(void);
int counting(void);
void sum(void);
void minimum(void);
void maximum(void);
void teraverse(void);
void addafter_constant(void);
void delafter_constant(void);
void add_pos(void); 


int main()
{
    int choice;
    while(1)
    {
        printf("\n1.ADDF_FONT\t2.ADD_LAST\t3.DEL_FRONT\t4.DEL_LAST\n5.COUNT\t\t6.SUM\t7.MINIMUM\t8.MAXIMUM\n9.TRAVERSE\t10.ADD_CONS\t11.del_cons\t12.add_pos");
        printf("\n\tENTER YOUR CHOICE");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: add_front(); break;
            case 2: add_last(); break;
            case 3: del_front();break;
            case 4: del_last(); break;
            case 5: counting(); break;
            case 6: sum() ; break;
            case 7: minimum(); break;
            case 8: maximum(); break;
            case 9: teraverse(); break;
            case 10: addafter_constant(); break;
            case 11: delafter_constant(); break;
            case 12: add_pos(); break;
            case 13: exit(0);
        }
    }
    return 0;
}
void add_front(void)// ADD FRONT
{
    struct node *n=(struct node * )malloc(sizeof(struct node));
    printf("\nENTER DATA");
    scanf("%d",&n->info);
    n->next=start;
    start=n;
    printf("\nnode inserted:");

}

void add_last (void)
{// ADD LAST
    struct node *t=start;
    struct node *n=(struct node *)malloc(sizeof(struct node));
    printf("\n enter information:");
    scanf("%d",&n->info);
    n->next=NULL;
    if(start==NULL)
    start=n;

    else
    {
        while (t->next!=NULL)
        t=t->next;
        t->next=n;
    }
    printf("\n new node inserted");
}
void del_front (void)
{//DELLL FRONT
    struct node *t=start;
    if(start==NULL)
    printf("\n underflow");
else
{
    start=start->next;
    free(t);
    printf("\n node deleted.........");
}
}

void del_last (void)
{//DELL LAST
    struct node *t=start;
    if(start==NULL)
    printf("\n underflow");
    else if(start->next==NULL)
    {
        free(t);
        start=NULL;
        printf("\n last single node deleted.....");
    }
    else
    {
        while(t->next->next!=NULL)
        t=t->next;
    free(t->next);
    t->next=NULL;
    printf("\n node deleted from last");
    }
}
//counting
int counting(void)
{
    struct node *t=start;
    int count=0;
    while(t!=NULL)
    {
        count++;
        t=t->next;
    }
    printf("\n count=%d",count);
    return(count);
}
//sum of all element
void sum(void)
{
    int sum=0;
    struct node *t=start;
    while(t!=NULL)
    {
        sum=sum+t->info;
        t=t->next;
    }
    printf("\n sum=%d",sum);
}
//minimum number
void minimum(void)
{
    struct node *t=start->next;
    int min=start->info;
    while(t!=NULL)
    {
        if(min>t->info)
        min=t->info;
    t=t->next;
    }
    printf("\n min=%d",min);
}
//maximum number
void maximum(void)
{
 struct node *t=start->next;
    int max=start->info;
    while(t!=NULL)
    {
        if(max<t->info)
        max=t->info;
    t=t->next;
    }
    printf("\n max=%d",max);

}
//traversing 
void teraverse(void)
{
    struct node *t=start;
    if(start==NULL)

        printf("\n underflow");
        else
        {
            while(t!=NULL)
            {
                printf("%d\t",t->info);
                t=t->next;
            }
        }    
}
void addafter_constant(void)
{
    int cons;
    struct node *t=start;
    struct node *n=(struct node*)malloc(sizeof(struct node));
    printf("\n enter your information");
    scanf("%d",&n->info);
    printf("\n enter cons value");
    scanf("%d",&cons);
    while(t!=NULL)
    {
        if(t->info==cons)
        break;
    else 
    t=t->next;
    }
    if(t==NULL)
    {
        printf("\n not found");
        return;
    }
    n->next=t->next;
    t->next=n;
}

void delafter_constant(void)
{
    int cons;
    struct node *t=start;
    printf("\n enter cons value");
    scanf("%d",&cons);
    while(t!=NULL)
    {
        if(t->info==cons)
        break;
    else 
    t=t->next;
    }
}

void add_pos(void)
{
    int pos,ctr=1;
    struct node *t=start;
    struct node *n=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data");
    scanf("%d",&n->info);
    printf("\n Enter position");
    scanf("%d",&pos);
    if(pos > counting())
    printf("\n envalid position");
    else
    {
        while(ctr < pos)
        {
            t=t->next;
            ctr++;
            {
                n->next=t->next;
                t->next=n;
            }
        }
    }
}