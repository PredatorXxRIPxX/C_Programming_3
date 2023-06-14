#include<stdio.h>
int main()
{
    int m,s,n,i;
    printf("donner votre nombre n :");
    scanf("%i",&n);
    s=0;
    m=0;

    for (size_t i = 0; i < n; i++)
    {
        s=i+1;
        m=s+m;
        printf("+ %i\n",s);
        
        
        
    }
    printf("%i",m);
    return 0;
    
}