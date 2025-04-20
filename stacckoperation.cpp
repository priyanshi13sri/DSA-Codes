#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100;

int i,j;
struct Stack{
    int items[MAX_SIZE];
    int top;
};

void createStack(struct Stack *stack){
    stack->top=-1;
}

bool isFull(struct Stack *stack){
    return stack-> top==MAX_SIZE -1;
}

bool isEmpty(struct Stack *stack){
    return stack->top==-1;
}

void push(struct Stack *stack,int value){
    if(isFull(stack)){
        printf("Stack Overflow\n",value);
    }else{
        stack->items[++stack->top] =value;
        printf("pushed %d onto the stack.\n",value);
    }
}

void pop(struct Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty.\n");
        return -1;
    }else{
        return stack->items[stack->top--];
    }
}

int main(){
    printf("1.")
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter value tp push: ");
        scanf("%d",&value);
        break;
        case 2:
        value = pop(&stack);
        if(value!= -1)
    }

    return 0;
}
