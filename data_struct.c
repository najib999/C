#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int n;
    struct node *next;
} node;

node* create(int x){
    node* a = malloc(sizeof(node));
    a->n = x;
    a->next = NULL;
    return a;
}
int main()
{
    node* head = NULL;
    node* a = create(5);
    head = a;
    printf("%d\n", head->n);
    node* b = create(8);
    a->next = b;
    printf("%d\n", (a->next)->n);
    return 0;
}
