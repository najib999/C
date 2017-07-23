#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Prints the common prefix of 3 strings

*/

int main(){
    int ind = 0, j = 0, fla;
    char my[] = "catojh";
    char stro[] = "catlo";
    char cx[] = "catalonia";
    for (int i = 0; i < strlen(my); i++){
        if (my[i] == stro[i]){
            if (my[i] == cx[i]){
                ind += 1;
            }
        } else
         break;
    }
    while (j<ind){
        printf("%c", my[j]);
        j += 1;
    }
    if (ind == 0)
        printf("No match.");
    return 0;
}
