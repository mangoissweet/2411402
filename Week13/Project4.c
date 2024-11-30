#include <stdio.h>

struct point{
    int x;
    int y;
};
int getArea(struct point p1,struct point p2){
    int xdiff,ydiff;
    xdiff=p2.x-p1.x;
    ydiff=p2.y-p1.y;

    return xdiff*ydiff;
}
int main(void){
    struct point p1,p2;
    int area;

    printf("input p1 coordinate (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("input p2 coordinate (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    area=getArea(p1,p2);
    printf("Area: %i",area);
}
 