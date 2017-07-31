#include <stdio.h>
#include <stdlib.h>

typedef struct que{
    int data;
    struct que* next;
    struct que* prev;
} que;

que* head = NULL;
que* tail = NULL;

que* create(int x){
    que* temp = malloc(sizeof(que));
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void push(int x){
    que* temp = create(x);
    if (head == NULL){
        head = temp;
        tail = temp;
    }
    else {
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

void pop(){
    que* temp = tail;
    if (tail == NULL){
        printf("Queue empty!\n");
    }
    else if (head == tail) {
        head = NULL;
        tail = NULL;
        free(temp);
    }
    else {
        (temp->prev)->next = NULL;
        tail = (temp->prev);
        free(temp);
    }
}

void print(){
    que* temp = head;
    if (temp == NULL){
        printf("Queue empty!\n");
    }
    else {
        printf("Queue elements: ");
        while (temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    push(7);
    push(6);
    push(5);
    push(4);
    print();
    pop();
    print();
    return 0;
}
