#include<stdio.h>  
#include <unistd.h>
char t[100],m[100],s[100],d[100],e[100];
void main () {
  char id[50];
  int menu,p=0,n=1;
  char text[] = "*** welcome to our restaurant ***";
    
for (int i = 0; text[i] != '\0'; i++) {
  printf("%c", text[i]);
  fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
  printf("\n");
  printf("    -------------------------\n");
  printf("Enter your name : ");
  scanf("%s",id);
    
while(n!=0){
  char tex[] = "== restaurant menu ==\n~~~~~~~~~~~~~~~~~~~~~\n1:Pizza ~ [50rs]\n2:Burger ~ [40rs]\n3:Maggi ~ [70rs]\n4:Dosa ~ [80rs]\n5:Egg roll ~ [60rs]\n~~~~~~~~~~~~~~~~~~~~~\nAdd item number to add to cart : ";
  for (int i = 0; tex[i] != '\0'; i++) {
    printf("%c", tex[i]);
    fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
   printf("\n");
   scanf("%d",&menu);
switch (menu) {
  case 1:{char t[] = "[pizza added to cart]";}
    
  for (int i = 0; t[i] != '\0'; i++) {
   printf("%c", t[i]);
   fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
   printf("\n");
         p=p+50;
         break;
  case 2:{char m[] = "[burger added to cart]";}
    
   for (int i = 0; m[i] != '\0'; i++) {
    printf("%c", m[i]);
    fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
    printf("\n");
         p=p+40;
         break;
 case 3:{char s[] = "[maggi added to cart]";}
    
  for (int i = 0; s[i] != '\0'; i++) {
       printf("%c", s[i]);
       fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
     printf("\n");
         p=p+70;
         break;
 case 4:{char d[] = "[dosa added to cart]";}
    
    for (int i = 0; d[i] != '\0'; i++) {
        printf("%c", d[i]);
        fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
     printf("\n");
         p=p+80;
         break;
 case 5:{char e[] = "[egg roll added to cart]";}
    
   for (int i = 0; e[i] != '\0'; i++) {
        printf("%c", e[i]);
        fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
     printf("\n");
         p=p+60;
         break;
 default:printf ("[not available]\n");
              break;
   }
   n=0;
  char te[] = "*************************\nDo you want to add more items?(1 = Yes ,0 = No):";
    
   for (int i = 0; te[i] != '\0'; i++) {
        printf("%c", te[i]);
        fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
   printf("\n");
   scanf("%d",&n);
}
printf("Total bill = %d",p);
char y[] = "\n\n!!!Thank you for ordering!!!";
    
    for (int i = 0; y[i] != '\0'; i++) {
        printf("%c", y[i]);
        fflush(stdout);      // Force output to show immediately
        sleep(100000);      // Delay of 0.1 second (100,000 microseconds)
    }
     printf("\n");
}