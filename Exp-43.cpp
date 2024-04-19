#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
} *top = NULL;

struct node* createnode(int key){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        cout<"Stack Overflow";
        return;
    }
    newnode->data = key;
    newnode->next = NULL;
    return newnode;
}

void push(int key){
    struct node* newnode = createnode(key);
    newnode->next = top;
    top = newnode;
}

int isempty(){
    return top == NULL;
}

struct node* pop(){
    if(!isempty()){
        struct node* temp = top;
        top = top->next;
        return temp;
    }
    else{
        cout<"stack underflow";
        return NULL;
    }
}

struct node* peek(){
    if(!isempty()){
        return top;
    }
}

int main(){
    int choices, key;
    while(true){
        cout<"/n";
        cout<<"1. Push";
        cout<"2. Pop";
        cout<<"3. Peek";
        cout<<"4. Quit";
        cin>>choices;
        switch(choices){
            case 1: 
            cout<<"Enter the element tp be printed";
            cin>>key;
            push(key);
            break;
            case 2:
            struct node* temp = pop();
            cout<<temp->key;
            break;
            case 3:
            struct node* temp = peek();
            cout<<temp->key;
            case 4:
            exit(1);
            default:
            cout<<"worng choices";
        }
    }
}
