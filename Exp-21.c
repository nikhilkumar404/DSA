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

struct node* commonnode(struct node* head1, struct node* head2){
    struct node *temp1 = head1; 
    struct node *temp2 = head2;
    int l1=0, l2 =0, moves = 0;
    while(temp1!=NULL){
        l1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        l2++;
        temp2=temp2->next;
    }
    temp1 = head1;
    temp2 = head2;
    if(l1>l2){
        moves=l1-l2;
        for(int i=0;i<moves;i++){
            temp1=temp1->next;
        }
    }
    else{
        moves = l2-l1;
        for(int i=0;i<moves;i++){
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1 = temp2){
            return temp1;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
}

int main(){
    struct node* head = NULL;
    head->key = 1;
    head->next = createnode(2);
    head->next->next = createnode(3);
    reverse(head);
}
