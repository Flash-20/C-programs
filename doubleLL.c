#include<stdio.h>
#include<stdlib.h>

/*DOUBLE LINKED LIST IMPLEMENTATION*/

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node NODE;
NODE *head = NULL;

void insert_end(int data)
{
    NODE *ptr, *temp;
    temp = (NODE*) malloc (sizeof(NODE));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}

void insert_front(int data)
{
    NODE *temp;
    temp = malloc(sizeof(NODE));
    temp->prev = NULL;
    temp->next = NULL;
    temp->data = data;

    temp->next = head;
    temp->prev = NULL;
    head = temp;
}

void del_first()
{
    NODE *temp = NULL;
    temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    head->prev = NULL;
}

void del_last()
{
    NODE *temp = head;
    NODE *temp2;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp->next = NULL;
    free(temp);
    temp = NULL;
    temp2 = NULL;
}

void print_data()
{
    if(head == NULL)
        printf("LIST EMPTY");
    NODE *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    head = malloc(sizeof(NODE));
    head->data = 10;
    head->prev = NULL;
    head->next = NULL;
    insert_end(20);
    insert_end(30);
    insert_end(40);
    insert_end(50);
    insert_front(8);
    insert_front(4);
    print_data();

    del_first();
    printf("\n");
    print_data();

    del_last();
    printf("\n");
    print_data();

}
