#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
int main()
{

    char M[3][4]={
        {'a','b','c','d'},
        {'e','f','g','h'},
        {'i','j','k','l'}
    };
    int L=sizeof(M)/sizeof(M[0]);
    int C=sizeof(M[0])/sizeof(M[0][0]);
    int l=L*C;
    char V[l];
    int index = 0;
    for(int i=0;i < L ; i++){
        for (int j=0; j<C; j++)
        {
            V[index]=M[i][j];
            index++;
        }
    }
    for(int i=0;i<l;i++){
        printf("%c,",V[i]);
    }
    return 0;
}


