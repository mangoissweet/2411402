#include <stdio.h>

struct point{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2)
{
	int xdiff, ydiff;
	xdiff=pPtr2->x - pPtr1->x;
	ydiff=pPtr2->y - pPtr1->y;
	
	return xdiff*ydiff;
}

int main(int argc, char *argv[])
{
	struct point p1, p2;
	struct point *pPtr1,*pPtr2;
	int area;
	pPtr1=&p1;
	pPtr2=&p2;
	
	printf("input p1 coordinate (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("input p2 coordinate (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    area=getArea(pPtr1,pPtr2);
    printf("Area: %i",area);

}
