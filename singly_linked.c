#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct node {
    int n;
    struct node *next;
} node;

node* head = NULL;

///creates a new element of type node

node* create(int x){
    node* a = malloc(sizeof(node));
    a->n = x;
    a->next = NULL;
    return a;
}

///inserts an element at the beginning of the list

node* insert_begn(int x){
    node* temp = malloc(sizeof(node));
    temp->n = x;
    temp->next = head;
    head = temp;
    return temp;
}

/// prints out all the elements in the list

void Print(){
    node* temp = head;
    printf("List: ");
    while(temp != NULL){
        printf("%d ", temp->n);
        temp = temp->next;
    }
    printf("\n");
}

///checks whether an element is present in the list

bool find(int x){
    node* temp = head;
    while ( temp != NULL ){
        if (temp->n == x){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

///delete any element present in the list

void delete_element(int x){
    node *temp = head, *temp2 = NULL;
    if (find(x)){
        if (temp == NULL){
            printf("Empty list.\n");
        }
        else {
            if (temp->n == x){
                head = temp->next;
                free(temp);
            }
            else {
                while(temp->n != x){
                    temp2 = temp;
                    temp = temp->next;
                }
                temp2->next = temp->next;
                free(temp);
            }
        }
    }
    else {
        printf("Element not present!\n");
    }
}

///inserts an element at the end of the list

node* insert_end(int x){
    node* temp = head;
    node* a = create(x);
    if (temp == NULL){
        temp = a;
        head = temp;
    }
    else {
        while ( temp->next != NULL){
            temp = temp->next;
        }
        temp->next = a;
    }
    return a;
}

///deletes the element at the end of the list

void delete_end(){
    node *temp = head, *temp2;
    if (temp == NULL){
        printf("List empty.\n");
    }
    else if (temp->next == NULL){
        head = NULL;
        free(temp);
    }
    else {
        while (temp->next != NULL){
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        free(temp);
    }
}

///deletes the element at the beginning of the list

void delete_front(){
    node *temp = head;
    if (temp == NULL){
        printf("List empty.\n");
    }
    else if (temp->next == NULL){
        head = NULL;
        free(temp);
    }
    else {
        head = temp->next;
        free(temp);
    }
}

int main()
{
    node* a = insert_begn(7);
    node* b = insert_begn(8);
    node* c = insert_begn(10);
    Print();
    printf("%d\n", find(10));
    node* d = insert_end(16);
    node* e = insert_end(19);
    Print();
    delete_element(7);
    Print();
    delete_end();
    Print();
    delete_front();
    Print();
    return 0;
}
