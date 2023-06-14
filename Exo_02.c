#include<math.h>
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("donner votre notre");
        scanf("%i",&n);
        if ((n<0))
        {
            printf("plus petit!");
        }else if ((n>20))
        {
            printf("plus grand!!!");
        }
        
        
    } while ((n<0)||(n>20));
    printf("merci!!");
    return 0;
    
}