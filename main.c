#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
   
   int a;
   printf("input seconds : ");
   scanf("%i", &a);
   
   printf("The time for %d second is %d : %d : %d",a,a/3600,(a%3600)/60,a%60);
   system("PAUSE");
   return 0;
}
