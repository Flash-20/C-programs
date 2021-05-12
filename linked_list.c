#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *head = NULL, *current = NULL;
void printlist(){
    NODE *ptr = head;
    printf("\n[head] =>");
    while(ptr != NULL){
        printf(" %d =>", ptr -> data);
        ptr = ptr -> next;
    }
    printf(" [null]\n");
}
void insert(int data){
    NODE *link = (NODE *) malloc (sizeof(NODE));
    link -> data = data;
    link -> next = head;
    head = link;
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    printlist();
    return 0;
}