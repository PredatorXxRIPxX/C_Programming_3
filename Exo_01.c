#include<stdio.h>
int main()
{
    int a;
    do
    {
        printf("donner un nombre entre 1 et 3: ");
        scanf("%i",&a);
    } while ((a<1)||(a>3));
    printf("Bravo!!!");
    return 0;
}