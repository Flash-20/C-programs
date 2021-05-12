#include<stdio.h>

#define MAX 5

int CQ[MAX], n;
int r = -1;
int f = 0, count=0;

void enqueue() //function to insert rear
{
    int key;
    if(count == n)
    {
        printf("Queue Overflow\n");
        return;
    }
    printf("\nEnter the element for adding in queue : ");
    r = (r+1)%n;
    scanf("%d", &key);
    CQ[r]=key;
    count++;
}

void dequeue() //function to delete front
{
    if (count == 0)
    {
        printf("Queue Underflow\n");
        return ;
    }
    printf("Element deleted from queue is : %d\n", CQ[f]);
    f=(f+1)%n;
    count--;
}

void display()
{
    int i, k=f;
    if(count == 0)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Contents of Queue are :\n");
    for (i=0; i<count; i++)
    {
        printf("%d\t", CQ[k]);
        k=(k+1)%n;
    }
}

int main()
{
    int choice;
    printf("Enter the size of the queue:");
    scanf("%d", &n);
    while(1)
    {
        printf("\nQueue operations are:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: enqueue();
            break;

            case 2: dequeue();
            break;

            case 3: display();
            break;

            case 4:
                printf("Thank you ");
                exit(1);
        }
    }
    return 0;
}
