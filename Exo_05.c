#include<stdio.h>
int main()
{
    int s,i,n;
    printf("donner le nombre : ");
    scanf("%i",&n);
    s=1;
    for (size_t i = 1; i < n+1; i++)
    {
        s=s*i;
        printf("* %i\n",s);

    }
    printf("%i",s);
    return 0;
    
}