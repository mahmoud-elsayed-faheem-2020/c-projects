#include <stdio.h>
// include string.h library for strcmp
// strcmp ==> string compare to compare between two string
// strcmp ==> return 0 if true ,return 1 if false
#include <string.h>
int main()
{
   //-------------------------------------
   //----data type
   char user_name[10];
   char user_input[10];
   char pass[] = "ma12";
   //-------------------------------------
   //----printf and scanf
   printf("please enter the username: ");
   scanf("%s", &user_name);
   printf("please enter the password: ");
   scanf("%s", &user_input);
   //-------------------------------------
   // password checker
   if (!strcmp(user_input, pass))
   {
      printf("hello %s", user_name);
      printf(" the pass is true \n");
   }
   else
   {
      printf("hello %s", user_name);
      printf(" sorry the pass is false \n");
   }
   return 0;
}