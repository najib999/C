#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cha_ins(char *p, char c){
    *p = c;
}

int main()
{
    char str[] = "I have 6 iPhones";
    char *p = &str[0];
    int index = 0;

    while( *p ){
        p++;
        index++;
        if (index == 7)
            cha_ins(p,'9');
    }
    printf("%s", str);

    return 0;
}
