#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

typedef struct node NODE;
NODE *head = NULL;

void add_at_end(NODE *head, int data)
{
    NODE *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(NODE));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void add_at_beginning(int data)
{
    NODE *temp = malloc(sizeof(NODE));
    temp->data = data;
    temp->link = head;
    head = temp;
}

void del_first()
{
    if (head == NULL)
        printf("LIST EMPTY");
    else
    {
        NODE *temp;
        temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
}

void print_data(NODE *head)
{
    if (head == NULL)
        printf("LIST IS EMPTY");
    NODE *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void main()
{
    head = malloc(sizeof(NODE));
    head->data = 40;
    head->link = NULL;

    NODE *current = malloc(sizeof(NODE));
    current->data = 80;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(NODE));
    current->data = 120;
    current->link = NULL;
    head->link->link = current;

    add_at_beginning(5);
    add_at_end(head, 50);
    del_first(head);
    print_data(head);
}