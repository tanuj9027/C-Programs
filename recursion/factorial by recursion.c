#include <stdio.h>
typedef struct pract{
    int id;
}Pract;
void incr(Pract* x)
{
    x->id++;
}
int main()
{
    Pract* x = (Pract*)malloc(sizeof(Pract));
    x->id =5;
    incr(x);
    printf("%d", x->id);
    return 0;
}
