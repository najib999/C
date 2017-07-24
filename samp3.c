#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

Initializes two Cartesian coordinate struct points using a function and calculates the distance between them and the
lengths of individual points. Also, using pointers to pass struct. 

*/

struct point {
        int x;
        int y;
    };

struct point init_point() {
    struct point temp;
    printf("Enter x coordinate: ");
    scanf("%d", &temp.x);
    printf("Enter y coordinate: ");
    scanf("%d", &temp.y);
    return temp;
};

double dista(struct point a, struct point *b) {
    return sqrt((a.x-(*b).x)*(a.x-(*b).x)  + (a.y-(*b).y)*(a.y-(*b).y));
}

double modu(struct point a){
    return sqrt(a.x*a.x + a.y*a.y);
}

int main()
{
    struct point pt1, pt2;
    float dist;
    pt1 = init_point();
    pt2 = init_point();
    printf("P1 = <%d, %d>\n", pt1.x, pt1.y);
    printf("P2 = <%d, %d>\n", pt2.x, pt2.y);
    dist = dista(pt1, &pt2);
    printf("Distance between the points = %f\n", dist);
    printf("Length of P1 = %f, length of P2 = %f\n", modu(pt1), modu(pt2));
    return 0;
}
