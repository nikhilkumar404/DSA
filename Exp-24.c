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

struct node* insertatposition(struct node* head, int key, int position){
    if(position<=0){
        return NULL;
    }
    struct node* newnode = createnode(key);
    struct node *temp = head;
    if(position==1){
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else{
        int count = 0;
        while(count!=(position-1)){
            temp=temp->next;
            count++;
        }
        if(temp!=NULL){
            newnode->next = temp->next;
            temp->next->prev = newnode;
            newnode->prev = temp;
            temp->next = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
        }
    }
}

struct node* deleteatposition(struct node* head, int position){
    if(head==NULL || head->next == NULL){
        return NULL;
    }
    struct node* temp = head;
    if(position==1){
        head = temp->next;
        head->prev = NULL;
        free(temp);
    }
    else{
        int count = 0;
        while(count!=(position-1)){
            temp=temp->next;
            count++;
        }
        if(temp==NULL){return NULL;}
        else if(temp->next==NULL){
            temp->prev->next = NULL;
            temp->prev = NULL;
            free(temp);
        }
        else{
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
        }
    }
}

int main(){
    struct node* head;
    head->prev=NULL;
    head->key = 1;
    head->next = createnode(2);
    head->next->prev=head;
    insertatposition(head, 4, 2);
    deleteatposition(head, 2);
}
