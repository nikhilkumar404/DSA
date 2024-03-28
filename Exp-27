#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node* next;
};

struct node* createnode(int key){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->key = key;
    newnode->next = NULL;
}

struct node* reverse(struct node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct node* newnode = reverse(head->next);
    struct node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newnode;
}

int ispalindrom(struct node* head1){
    struct node* head2 = reverse(head1);
    struct node* temp1 = head1, *temp2 = head2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->key!=temp2->key){
            return 0;
        }
    }
    return 1;
}

int main(){
    struct node* head = createnode(1);
    head->next = createnode(2);
    head->next->next = createnode(1);
    printf("%d ", ispalindrom(head));
}
