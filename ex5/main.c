#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,pt,pa;


    printf("Digite a razao da PA\n");
    scanf("%d",&r);
    printf("Digite o primeiro termo\n");
    scanf("%d",&pt);
    if (r>0)
     pa=r*pt;


    do {
     pa=r*pa;
     printf("termos da pg \n  %d\n",pa);

 }while(pa<100);





return 0;

}


