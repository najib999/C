#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    Prints sum of reciprocals of the first 100 natural numbers
    */

    float sum = 0, num;
    for (int i = 1; i <= 100; i++ ){
        sum += 1.0/i;
    }
    printf("Sum of reciprocals: %f\n", sum);

    /*
    Asks a user for number inputs and them sums those numbers
    */

    int m;
    sum = 0;
    printf("How many numbers? ");
    scanf("%d", &m);
    for (int j = 0; j < m; j++){
        printf("Enter a number: ");
        scanf("%f", &num);
        sum += num;
    }
    printf("%f", sum);

    return 0;
}
