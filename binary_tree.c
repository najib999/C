#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

node* root = NULL;

node* create(int x){
    node* temp = malloc(sizeof(node));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

///inserts a node in the balanced binary tree

node* inst(int x){
    node* temp = root;
    node* a = create(x);
    node* ins(node* a, node* temp){
        if (a->data > temp->data){
            if (temp->right == NULL){
                temp->right = a;
                return a;
            }
            else {
                temp = temp->right;
                return ins(a,temp);
            }
        }
        else {
            if (temp->left == NULL){
                temp->left = a;
                return a;
            }
            else {
                temp = temp->left;
                return ins(a,temp);
            }
        }
    }
    if (root == NULL){
        root = a;
        return a;
    }
    else {
        return ins(a, temp);
    }
}

///searchs for a node in the balanced binary tree

int serc(int x, node* temp){
    if (temp == NULL){
        return -1;
    }
    else if (temp->data == x){
        return 1;
    }
    else if (x > temp->data){
        return serc(x, temp->right);
    }
    else {
        return serc(x, temp->left);
    }
}

int main()
{
    node* a = inst(10);
    node* b = inst(20);
    printf("%d\n", a->data);
    printf("%d\n", b->data);
    printf("%d\n", serc(50, root));
    return 0;
}
