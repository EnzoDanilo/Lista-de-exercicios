#include<stdio.h>
#include<stdlib.h>
int main()
{
int n1,i;
    printf("Digite um numero:");
    scanf("%d",&n1);

   if (n1%2==0)


    for(i=0; i<=10;i+=2){
        if (n1%2==0){
     printf("\n%d X %d = %d",n1,i,n1*i);
        }

}
    return 0;

}
