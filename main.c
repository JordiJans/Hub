#include <stdio.h>

int main()
{
  printf("Welkom\n");
         printf("Maak hier uw keuze:\n");
printf("Big mac druk 1\n");
printf("Voor mac flurry druk 2\n");
printf("Voor een big mc chicken menu druk 3\n");

int invoer;
scanf("%d", &invoer);
if(invoer == 1){
    printf("Dat is dan 10 euro.\n");
} else if(invoer == 2)
    printf("Dat is dan 5 euro.\n");
   else if(invoer == 3)
            printf("Dat is dan 6 euro.\n");

}
