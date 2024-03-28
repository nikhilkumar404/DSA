#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node *prev, *next;
};

void createnode(int key){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->key = key;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

struct node* middle(struct node* head){
    struct node* slow, *fast;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    struct node* head;
    head->prev=NULL;
    head->key = 1;
    head->next = createnode(2);
    head->next->next = createnode(3);
    printf("%d ", middle(head)->key);
}
