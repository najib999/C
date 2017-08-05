#include <stdio.h>
#include <cs50.h>

int main (void) {
    long num, temp;
    int i = 1, su = 0;
    string name;
    printf("Number: ");
    num = get_long_long();
    temp = num;
    while (temp != 0){
        if (i%2 != 0) {
            su += temp%10;
        }
        else {
            int temp2 = 2*(temp%10);
            while (temp2 != 0){
                su += temp2%10;
                temp2 /= 10; 
            }
        }
        i++;
        temp /= 10;
        if (temp > 50 && temp < 56){
            name = "MASTERCARD";
        }
        else if (temp == 34 || temp == 37){
            name = "AMEX";
        }
        else if (temp == 4){
            name = "VISA";
        }
    }
    if (su%10 != 0){
        printf("INVALID\n");
    }
    else {
       printf("%s\n", name); 
    }
    return 0;
}
