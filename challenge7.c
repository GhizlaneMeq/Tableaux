#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
int main()
{
    int T[50][50];
    int nbrL,nbrC, somme=0;

    printf("entrer le nombre de columns et de lignes\n");
    scanf("%d\n %d", &nbrC,&nbrL);
    for(int i=0;i<nbrL;i++){
        for(int j=0;j<nbrC;j++){
            scanf("%d", &T[i][j]);
            somme+=T[i][j];
        }
        printf("\n");
    }
    for(int i=0;i<nbrL;i++){
        for(int j=0;j<nbrC;j++){
            printf("%d  ", T[i][j]);
        }
        printf("\n");
    }
     printf("\n somme= %d",somme);
    return 0;
}


