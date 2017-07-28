#include <stdio.h>
#include <stdlib.h>


int find(int *a, int size, int x){
    for (int i = 0; i < size; i++){
        if (a[i] == x){
            return 1;
        }
    }
    return -1;
}

int main()
{
    int a[10] = {2, 4, 6, 7, 8, 9, 1, 3, 5, 10};
    int size = sizeof(a)/sizeof(a[0]);
    printf("%d\n", find(a, size, 40));
    return 0;
}
