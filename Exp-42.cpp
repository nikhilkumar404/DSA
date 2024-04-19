#include<bits/stdc++.h>

struct stack{
    int top;
    unsigned int capactiy;
    int *array;
};

struct stack* createstack(unsigned capacity){
    struct stack* stack = (struct stack*)malloc(sizeof(struct stack));
    stack->top = -1;
    stack->capactiy = capacity;
    stack->array = (int *)malloc(sizeof(int)*capacity);
    return stack;
};

int isfulll(struct node* stack){
    return stack->top == stack->capacity-1;
}

int isempty(struct node* stack){
    return stack->top == -1;
}

void push(struct stack* stack, int key){
    if(!isfull(stack)){
        stack->array[++stack->top] = key;
        cout<<"Key pushed";
    }
    else{
        cout<<"Stack is full";
    }
}

int pop(struct stack* stack){
    if(isempty(stack)){
        return INT_MIN;
    }
    return stack->array[stack->top--];
}

int peek(struct stack* stack){
    if(isempty(stack)){
        return INT_MIN;
    }
    return stack->array[stack->top];
}

int main(){
    struct node* stack = createstack(10);
    push(stack, 10);
    push(stack, 20);
    int popped = pop(stack);
    cout<<"Popped element is"<<popped;
}
