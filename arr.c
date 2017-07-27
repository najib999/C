#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int mulArr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    char chArr[] = "loaded";
    for (int i = 0; i < 2; i++){
        for (int j =0; j < 3; j++){
            printf("%d ", mulArr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < strlen(chArr); i++){
        printf("%c", chArr[i]);
    }
    printf("\n%s",chArr);
    return 0;
}
