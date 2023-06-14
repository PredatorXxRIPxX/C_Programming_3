#include<stdio.h>
int main()
{
    int s,i,n;
    printf("donner le nombre de votre table de multiplication: ");
    scanf("%i",&n);
    s=1;
    for (size_t i = 0; i < 11; i++)
    {
        s=n*i;

        printf("%i",i);
        printf("*");
        printf("%i",n);
        printf("=");
        printf("%i\n",s);

    }
    return 0;
  
    
}