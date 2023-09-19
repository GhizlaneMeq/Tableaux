#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    //solution 1
    char name[100];
    printf("saisir votre nom \n");
    scanf("%s[^\n", &name);
    int len=strlen(name);
    printf("le nombre de caractere de votre nom est : %d\n",len);
    //solution 2
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    printf("le nombre de caractere de votre nom est : %d",i);
    return 0;
}


