#include <stdio.h>
#include <stdlib.h>

/*

Calculates and prints out the GCD of two integers by recursion using Euclidean Algorithm.

*/

int gcd(int a, int b){
    if ( a == 0 || b == 0)
        return -1;
    if (a > b){
        if (a%b == 0)
            return b;
        else
            return gcd(b, a%b);
    }
    else {
        if (b%a == 0)
            return a;
        else
            return gcd(a, b%a);
    }
}


int main(){
    int c;
    c = gcd(98, 56);
    printf("%d\n", c);
    return 0;
}
