#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3] = {10, 20},total=0;
    arr[2] = 30;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        total += arr[i];
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int b[2];
    for (int i = 0; i<sizeof(b)/sizeof(2); i++){
        printf("\nEnter a integer: ");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < sizeof(b)/sizeof(b[0]); i++){
        total += b[i];
        printf("b[%d] = %d\n", i, b[i]);
    }
    printf("\nTotal: %d\n", total);
    return 0;
}
