#include<stdio.h>
int main()
{
    int n,i;
    printf("donner votre nombre n");
    scanf("%i",&n);
    for (size_t i = 1; i < 11; i++)
    {
        n=n+1;

        printf("%i\n",n);
        

    }
    return 0;
    
}