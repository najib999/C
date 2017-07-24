#include <stdio.h>
#include <stdlib.h>

/*
Initializes a Cartesian coordinate point using a function and structure object.
*/

struct point {
        int x;
        int y;
    };

struct point init_point(int x, int y) {
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
};

int main()
{
    int x, y;
    printf("Enter x coordinate: ");
    scanf("%d", &x);
    printf("Enter y coordinate: ");
    scanf("%d", &y);
    printf("\n");
    struct point pt;
    pt = init_point(x, y);
    printf("point = <%d, %d>\n", pt.x, pt.y);
    return 0;
}
