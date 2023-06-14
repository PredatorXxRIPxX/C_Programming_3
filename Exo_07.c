#include<stdio.h>
int main()
{
    int n,i,max;
    printf("donner un nombre n :");
    scanf("%i",&n);
    max=n;
    for (size_t i = 0; i < 19; i++)
    {
        printf("donner votre nombre");
        scanf("%i",&n);
        if (max<n)
        {
            max=n;
        }
        
    }
 printf("le plus grand nombre est:  %i",max);
 return 0;
    

}