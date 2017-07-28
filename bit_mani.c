#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void switch_status(int machine_status, int switch_status)
{
    if ((switch_status & machine_status) != 0){
        printf("switch is ON!\n");
    }
    else {
       printf("switch is OFF!\n");
    }
}

int main()
{
    int router_status = 15;  /// 1111
    int switch_A = 8;       ///  1000
    int switch_B = 4;       ///  0100
    int switch_C = 2;       ///  0010
    int switch_D = 1;       ///  0001

    switch_status(router_status, switch_A);
    switch_status(router_status, switch_B);
    switch_status(router_status, switch_C);
    switch_status(router_status, switch_D);

    return 0;
}
