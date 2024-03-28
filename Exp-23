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

struct node* insertionatposition(struct node* head, int position, int key){
    if(head==NULL || head->next ==NULL){return NULL;}
    if(position==1){
        struct node* newnode = createnode(key);
        newnode->next = head->next;
        head->next = newnode;
        newnode = head;
    }
    else{
        struct node* temp = head;
        for(int i=1;i<(position-1);i++){
            temp=temp->next;
        }
        struct node* newnode = createnode(key);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

struct node* deleteatposition(struct node* head, int position){
    if(head==NULL || head->next==NULL){return NULL;}
    struct node* temp = head;
    struct node* prev = head;
    if(position==1){
        while(prev->next!=head){
            prev=prev->next;
        }
        prev->next = temp->next;
        free(temp);
    }
    else{
    for(int i=1;i<position;i++){
        prev=temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    }
}

int main(){
    struct node* head;
    head->key = 1;
    head->next = createnode(2);
    head->next->next = createnode(3);
    head->next->next->next = head;
    insertionatposition(head, 2, 3);
    deleteatposition(head, 2);
}
