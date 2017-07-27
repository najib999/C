#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(int* a, int* b){
    *a = 1;
    *b = 2;
}

void chan(int a, int b){
    a = 1;
    b = 2;
}

void ch(int arr[2]){
    arr[0] = 10;
}

void cha(char str[]){
    str[0] = 'm';
}

int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    chan(a,b);
    printf("%d\n", *p);
    printf("%d\n", *q);
    change(&a,&b);
    printf("%d\n", *p);
    printf("%d\n", *q);

    int arr[2] = {0, 20};
    ch(arr);
    printf("%d %d\n", arr[0], arr[1]);

    char str[] = "loaded";
    cha(str);
    printf("%s", str);
    return 0;
}
