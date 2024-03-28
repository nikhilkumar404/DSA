#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node *prev;
};

void createnode(int key){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->key = key;
    newnode->next = NULL;
    return newnode;
}

struct node* merge(struct node* head1, struct node* head2){
    struct node* temp1 = head1, *temp2 = head2;
    struct node* head3, temp3;
    if(temp1->key < temp2->key){
        head3 = createnode(temp1->data);
        temp3 = head3;
        temp1=temp1->next;
    }
    else{
        head3 = createnode(temp2->data);
        temp3 = head3;
        temp2 = temp2->next;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->key < temp2->key){
            temp3->next = createnode(temp1->key);
            temp1 = temp1->next;
            temp3 = temp3->next;
        }
        else{
            temp3->next = createnode(temp2->key);
            temp2 = temp->next;
            temp3 = temp3->next;
        }
    }
    while(temp1!=NULL){
        temp3->next = createnode(temp1->key);
        temp1= temp1->next;
        temp3 = temp3->next;
    }
    while(temp2!=NULL){
        temp3->next = createnode(temp2->key);
        temp2 = temp2->next;
        temp3 = temp3->next;
    }
    return head3;
}

int main(){
    struct node* head1, * head2;
    head1 = createnode(1);
    head2 = createnode(1);
    head1->next = createnode(2);
    head1->next->next = createnode(4);
    head2->next = createnode(3);
    merge(head1, head2);    
}
