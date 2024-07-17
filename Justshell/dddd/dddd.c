#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void super_khrb9a(int *****p, int ***q, int **r)
{
    int temp = ****(*p);
    ****(*p) = **(*q);
    **(*q) = *(*r);
    *(*r) = temp;
    (*p)--;
    (*q)++;
    r = &(*q);
}

int main()
{
    int a = 5, b = 10, c = 15, d = 20;
    int *pa = &a;
    int **ppa = &pa;
    int ***pppa = &ppa;
    int ****ppppa = &pppa;
    int *****pppppa = &ppppa;

    int *pb = &b;
    int **ppb = &pb;
    int ***pppb = &ppb;

    int *pc = &c;
    int **ppc = &pc;

    printf("Qbl: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    super_khrb9a(pppppa, pppb, ppc);

    printf("Mn b3d: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
    printf("pa pointi 3la: %d\n", *pa);
    printf("pb pointi 3la: %d\n", *pb);
    printf("pc pointi 3la: %d\n", *pc);
    printf("ppa pointi 3la pointer li kay-pointi 3la: %d\n", **ppa);

    return 0;
}
