#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,pt,pa;


    printf("Digite a razao da PG\n");
    scanf("%d",&r);
    printf("Digite o primeiro termo\n");
    scanf("%d",&pt);
    if (r>1)
     pa=r*pt;


    do {
     pa=r*pa;
     printf("termos da pa \n  %d\n",pa);

 }while(pa<100);

 else
    printf("Digite a razao da PG\n");
    scanf("%d",&r);
    printf("Digite o primeiro termo\n");
    scanf("%d",&pt);
     pa=pt-r;

     do {
     pa=r*pa;
     printf("termos da pa \n  %d\n",pa);

 }while(pa>0);



return 0;
