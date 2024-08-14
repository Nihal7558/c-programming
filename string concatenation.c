
#include <stdio.h>
#include <string.h>
int main()
{

   char ch[30];
   char ch2[30];
   printf("enter a 1st string");
   scanf("%s",ch);
   printf("enter the 2nd strig");
   scanf("%s",ch2);
   strcat(ch,ch2);
   printf("the string is ;%s",ch);
  
   
   
      return 0;
}
