#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
typedef struct node STACK;
STACK *top = NULL;

int main()
{
    int choice;
    while(1)
    {
        printf("\nSTACK OPERATIONS ARE:\n");
        printf("1.Insert node\n2.Delete node\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: createNode();
            break;

            case 2: deleteNode();
            break;

            case 3: display();
            break;

            case 4: printf("Thank you\n");
            exit(1);

            default: printf("Invalid choice:");
        }
    }
    return 0;
}


void createNode()       /*create a node*/
{
    STACK *temp = (STACK*)malloc(sizeof(STACK));
    printf("Enter the data:");
    scanf("%d", &temp->data);
    temp->link = top;
    top = temp;
}

void deleteNode()       /*delete a node*/
{
    STACK *temp = top;
    if(top == NULL)
    {
        printf("Stack underflow");
    }
    else
    {
        printf("Deleted data is : %d\n", temp->data);
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

void display()      /*display the stack*/
{
    STACK *temp = top;
    if(top == NULL)
        printf("Stack underflow");
    printf("Contents of stack are: ");
    while(temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->link;
    }
}
