#include <stdio.h>

struct PriorityQueue
{
    int element;
    int priority;
};

int main()
{
    struct PriorityQueue q[10];

    int rear = -1;
    int choice;
    int i, loc, max;

    while (1)
    {
        printf("\n\n--- PRIORITY QUEUE ---\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (rear == 9)
                {
                    printf("Queue is Full");
                }
                else
                {
                    rear++;

                    printf("Enter Element: ");
                    scanf("%d", &q[rear].element);

                    printf("Enter Priority: ");
                    scanf("%d", &q[rear].priority);

                    printf("Element Inserted");
                }
                break;

            case 2:
                if (rear == -1)
                {
                    printf("Queue is Empty");
                }
                else
                {
                    max = q[0].priority;
                    loc = 0;

                    for (i = 1; i <= rear; i++)
                    {
                        if (q[i].priority > max)
                        {
                            max = q[i].priority;
                            loc = i;
                        }
                    }

                    printf("Deleted Element = %d\n",
                           q[loc].element);

                    for (i = loc; i < rear; i++)
                    {
                        q[i] = q[i + 1];
                    }

                    rear--;
                }
                break;

            case 3:
                if (rear == -1)
                {
                    printf("Queue is Empty");
                }
                else
                {
                    printf("\nElement\tPriority\n");

                    for (i = 0; i <= rear; i++)
                    {
                        printf("%d\t%d\n",
                               q[i].element,
                               q[i].priority);
                    }
                }
                break;

            case 4:
                printf("Program Exit");
                return 0;

            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}