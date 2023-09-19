#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int x = 0 ;

    //int arrTr[4];
    for (int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<10; i++)
    {
        for(int j = i; j < 10 ; j++){
            if(arr[i] < arr[j]){
            x = arr[i] ;
            arr[i] = arr[j];
            arr[j] = x;

            }
        }

    }
    for (int i=0; i<10; i++)
    {

        printf("%d-",arr[i]);
    }


    return 0;
}
