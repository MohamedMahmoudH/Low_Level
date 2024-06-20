/*
https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem?isFullScreen=true
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
/**************************************************/

int compare(const void *a , const void *b)
{
    const triangle *v1 = (const triangle *)a;
    const triangle *v2 = (const triangle *)b;

    double p1 = (v1->a + v1->b + v1->c) / 2.0 ;
    double p2 = (v2->a + v2->b + v2->c) / 2.0 ;

    long double area1 = sqrt(p1 * (p1 - (v1->a)) * (p1 - (v1->b)) * (p1 - (v1->c)));
    long double area2 = sqrt(p2 * (p2 - (v2->a)) * (p2 - (v2->b)) * (p2 - (v2->c)));

    return(area1 > area2 ? 1 : (area2 > area1 ? -1 : 0));
}

void sort_by_area(triangle* tr, int n) {
    qsort(tr , n , sizeof(triangle) , compare);
}

/**************************************************/
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
