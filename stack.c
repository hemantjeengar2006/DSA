#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max = 100, a[max], n, i, choice;
    n = -1;
    while (1)
    {
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.peek");
        printf("\n4.display");
        printf("\n5.exit");
        printf("\nenter your choice......");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (n == max - 1)
                printf("\narray is overflow");
            else
            {
                n++;
                printf("\nenter element:");
                scanf("%d", &a[n]);
            }
            break;
        case 2:
            if (n == -1)
                printf("\n array is underflow");
            else
            {
                printf("\ndeleted element is %d", a[n]);
                n--;
            }
            break;
        case 3:
            if (n == -1)
                printf("\n array is underflow");
            else
            {
                printf("\npeek element is %d", a[n]);
            }
            break;
        case 4:
            if (n == -1)
                printf("\n array is underflow");
            else
            {
                printf("\narray element are:");
                for (i = n; i >= 0; i--)
                {
                    printf("\n%d", a[i]);
                }
            }
            break;
        case 5:
            exit(0);
        default:
            printf("\ninvalid choice");
        }
    }
}