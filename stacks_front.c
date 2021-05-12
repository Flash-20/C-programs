#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node NODE;
NODE *first = NULL;
void insert_front(int item)
{
    NODE *temp;
    temp = (NODE *) malloc (sizeof(NODE));
    temp -> info = item;
    temp -> link = first;
    first = temp;
}
void delete_front()
{
    NODE *temp;
    if(first == NULL)
    {
        printf("\nThe list is empty\n");
        return;
    }
    temp = first;
    first = temp -> link;
    printf("\nThe deleted item is %d\n", temp -> info);
    free(temp);
}
void display()
{
    NODE *temp;
    if(first == NULL)
    {
        printf("\nThe list is empty\n");
        return;
    }
    temp = first;
    while (temp != NULL)
    {
        printf("%d ", temp -> info);
        temp = temp -> link;
    }
}
void main()
{
    int item, ch;
    while(1)
    {
        printf("1.Insert\t 2.Delete\t 3.Display\t 4.Exit");
        printf("\nEnter a choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                    printf("\nEnter an item to insert\n");
                    scanf("%d", &item);
                    insert_front(item);
                    break;
            case 2 :
                    delete_front();
                    break;
            case 3 :
                    display();
                    break;
            default : 
                    exit(0);
        }
    }
}