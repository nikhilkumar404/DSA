#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node* next;
};

void createnode(int key){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->key = key;
    newnode->next = NULL;
}

struct node* reversebyrecursion(struct node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct node* newhead = reverse(head->next);
    struct node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;
}

struct node* reverse(struct node* head){
    struct node* prev, *curr, *front;
    prev = 0;
    curr = front = head;
    while(front!=NULL){
        front = front->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    head = prev;
    return head;
}

int main(){
    struct node* head = NULL;
    head->key = 1;
    head->next = createnode(2);
    head->next->next = createnode(3);
    reverse(head);
}
