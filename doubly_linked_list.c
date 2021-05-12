#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node NODE;
NODE *head = NULL;
void print(){
    NODE *ptr = head;
    while (ptr!= NULL) {
        printf("%d", ptr ->data);
        ptr = ptr -> next; 
    }
}
void main(){
    head = (NODE *) malloc (sizeof(NODE));
    head -> data = 10;
    head -> prev = NULL;
    head -> next = NULL;
    print();
}