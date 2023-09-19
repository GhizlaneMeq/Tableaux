#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, somme=0, cmp=0,moyenne,cmpSup=0;
    printf("entrer le nombre de notes: ");
    scanf("%d",&n);
    int arr[n];
    printf("entrer les notes");
    //
    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<0 || arr[i]>20)
        {
            printf("la note doit etre entre 0 et 20");
            break;
        }
        else
        {
            somme+=arr[i];
            cmp++;

        }
    }


    /*for (int i=0;i<n;i++){
       printf("%d\n",arr[i]);

    }
    */
    moyenne=somme/cmp;

    int noteMin=arr[0];
    int noteMAx=arr[0];
    printf("le nombre des notes entre est: %d\n",cmp);
    printf("la moyenne des notes entrer est: %d\n",moyenne);
    int i;
    int pmin=0;
    int pmax;
    for (i=0; i < n; i++)
    {
        if(arr[i]==moyenne){
            printf("la note %d est egal a la moyenne\n", arr[i]);

        }
        else if(arr[i] < moyenne){
            printf("la note %d est inferieur a la moyenne\n", arr[i]);

        }
        else{
            printf("la note %d est superieur a la moyenne\n", arr[i]);
            cmpSup++;

        }
        if(arr[i]<noteMin){
            noteMin=arr[i];
            pmin=i;
            printf("%d",noteMin);
        }
        if(arr[i]>noteMAx){
            noteMAx=arr[i];
            pmax=i;
        }
    }
    printf("la note la plus petite est %d sa position est %d\n ",noteMin,pmin);
    printf("la note la plus grande est %d sa position est %d ",noteMAx,pmax);
    return 0;
}

