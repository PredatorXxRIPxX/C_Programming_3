#include<stdio.h>
#include<math.h>
int main()
{
    int y,n;
    printf("donner la valeur de n:\t");
    scanf("%i",&n);
    
    if (n>=20)
    {
        y=n^(10);
        printf("%i",y);
    }
    y=1;
     if (n<20)
    {
       for (size_t i = 1; i < n+1; i++)
       {
           y=i*y;
           
       }
       printf("=%i",y);
       return 0;
       
        
    }
    
    
    
}