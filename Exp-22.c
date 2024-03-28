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

struct node* cycledetection(struct node* head){
    struct node* temp = head;
    struct node* slow = head, *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return slow;
        }
    }
    return NULL;
}

struct node* removal(struct node* head){
    struct node* commonnode = cycledetection(head);
    struct node* temp = head;
    while(temp != commonnode){
        temp = temp->next;
        commonnode = commonnode->next;
    }
    commonnode->next = NULL;
}

int main(){
    struct node* head = NULL;
    head->key = 1;
    head->next = createnode(2);
    head->next->next = createnode(3);
    reverse(head);
}
