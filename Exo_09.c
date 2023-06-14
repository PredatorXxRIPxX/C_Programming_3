#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,n,b,s;
    printf("bonjour\n" "s'il vouz plait choisir l'un de c'est action \n"
   "Une multiplication par additions successives. tapé 1 \n" "Une division par soustractions successives. tapé 2 \n ""Une élévation à la puissance par multiplications successives tapé 3 \n""Le pgcd de deux nombres par soustractions successives tapé 4\n ");
   scanf("%c",&n);
   if (n=1)
   {
       printf("bonjour dans la multiplication par additions successives\n""s'il vouz plait donner un nombre\n");
       scanf("%i",&a);
       printf("s'il vouz plait donner la unité de multiplication\n");
       scanf("%i",&b);
       for (size_t i = 0; i < b; i++)
       {
           printf("%i",a);
           printf("+");
           
           s=a+s;

           
       }
       printf("= %i",s);
       }
       if (n=2)
       {
           printf("bonjour dans la division par soustractions successives  \n");
           printf("donner votre diviseur\n");
           scanf("%i",&a);
           printf("donner le nombre que le voulez le diviser\n");
           scanf("%i",&b);
           do
           {
               
           } while ((b/a)!=0);
           
       }
       if (n=4)
       {
           printf("bonjour dans le pgcd s'il vouz plait donner les deux nombre \n");
           scanf("%i%i",&a,&b);
           do
           {
               /* code */
           } while (/* condition */);
           
       }
       
       

   
}