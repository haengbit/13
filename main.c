#include <stdio.h>
#include <string.h>
# define MAX_NAME 20

struct point {
	int x;
	int y;
};

int main(int argc, char *argv[]) {
	
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("input p1 coordinate (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xdiff = p2.x - p1.y;
	
	ydiff = p2.y - p1.y;
	
	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
	
	printf("distance : %lf\n", dist);
	
	return 0;
}
