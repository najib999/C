#include <stdio.h>
#include <stdlib.h>

typedef struct stack_node{
    int data;
    struct stack_node *next;
}stack_node;

stack_node* stack_ptr = NULL;

stack_node* create(int x){
    stack_node* r = malloc(sizeof(stack_node));
    r->data =  x;
    r->next = NULL;
    return r;
}

void insert(int x){
    stack_node* r = create(x);
    if (stack_ptr == NULL){
        stack_ptr = r;
    }
    else {
        r->next = stack_ptr;
        stack_ptr = r;
    }
}

void print(){
    stack_node* r = stack_ptr;
    if (r == NULL){
        printf("No element in stack!\n");
    }
    else {
        printf("Elements in stack: ");
        while(r != NULL){
            printf("%d ", r->data);
            r = r->next;
        }
        printf("\n");
    }
}

void remo(){
    stack_node* temp = stack_ptr;
    if (stack_ptr == NULL){
        printf("No element in stack!");
    }
    else {
        stack_ptr = stack_ptr->next;
        free(temp);
    }
}

int main()
{
    insert(7);
    insert(10);
    insert(20);
    print();
    printf("Top of stack element: %d\n", stack_ptr->data);
    remo();
    print();
    return 0;
}
