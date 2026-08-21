#include <stdio.h>

#define MAX 5

int main()
{
    int q[MAX];
    int front = 0;
    int rear = -1;
    int choice;
    int i;

    while (1)
    {
        printf("\n\n--- QUEUE ---\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                if (rear == MAX - 1)
                {
                    for (i = front; i < rear; i++)
                    {
                        q[i] = q[i + 1];
                    }

                    rear--;
                }

                rear++;

                printf("Enter Element: ");
                scanf("%d", &q[rear]);

                printf("Element Inserted\n");

                break;


            case 2:

                if (rear == -1)
                {
                    printf("Queue is Empty\n");
                }
                else
                {
                    printf("Deleted Element = %d\n", q[front]);

                    front++;
                }

                break;


            case 3:

                if (rear == -1)
                {
                    printf("Queue is Empty\n");
                }
                else
                {
                    printf("Front Element = %d\n", q[front]);
                }

                break;


            case 4:

                if (rear == -1)
                {
                    printf("Queue is Empty\n");
                }
                else
                {
                    printf("Queue Elements: ");

                    for (i = front; i <= rear; i++)
                    {
                        printf("%d ", q[i]);
                    }

                    printf("\n");
                }

                break;


            case 5:

                printf("Program Exit\n");
                return 0;


            default:

                printf("Invalid Choice\n");
        }
    }

    return 0;
}