#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,so=0;

    do {   printf("\npara sair digite 0\n");
            printf("Digite os numeros que deseja somar\n");
           scanf("%d",&cont);

        so=cont+so;
        printf("soma: %d\n",so);


        }while (cont!=0);








}
