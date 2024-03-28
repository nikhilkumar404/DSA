#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node* next;
};

struct node* head;

void createnode(int key){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->key = key;
    newnode->next = NULL;
}

struct node* search(int key){
    struct node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void print(){
    struct node* temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    struct node* head = NULL;
    head->key = 1;
    head->next = createnode(2);
    struct node* newnode = search(2);
    print();
}
