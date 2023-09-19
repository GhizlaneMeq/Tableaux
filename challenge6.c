#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
int main()
{
    char texte[]="Quel sinistre mot !",rech;
    bool exist = false;
    for(int i=0; i<strlen(texte); i++)
    {
        if(texte[i]=='s')
        {
            printf(" la position du lettre  s est %d \n",i);

        }
        if(texte[i]=='m')
        {
            printf("la position du lettre m est %d \n ",i);
            texte[i]='s';
            break;
        }


    }
    printf("%s\n",texte);
    printf("entrer une lettre a rechercher\n");
    scanf("%c",&rech);


    for(int i=0; i<strlen(texte); i++)
    {
        if(texte[i]==rech)
        {
            printf("la position du lettre %c est %d \n ",rech,i);
            exist=true;
        }

    }
    if(exist==false)
    {
        printf("la lettre n'exist pas ");
    }

    return 0;
}


