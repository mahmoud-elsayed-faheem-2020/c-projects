#include <stdio.h>
// #include <stdbool.h>
//   function
//|||||||||||||||||
int add(int x, int y)
{
 printf("result of addition is = %d \n", x + y);
}
int substract(int x, int y)
{
 printf("result of substract is = %d \n", x - y);
}
int mul(int x, int y)
{
 printf("result of multiplication is = %d \n", x * y);
}
int div(int x, int y)
{
 printf("result of div is = %d \n", x / y);
}
int longdiv(int x, int y)
{
 printf("the longdiv is = %d \n", x % y);
}
int main()
{
 //-------------------------------------
 //----data type
 int x;
 int y;
 char operation;
 // bool b = true;
 // printf("the value is  %d \n", b); //=> if true =1 ,if false =0
 //-------------------------------------
 //----printf and scanf
 printf("please enter the value of num x: ");
 scanf(" %d", &x);
 printf("please enter the value of num y: ");
 scanf(" %d", &y);
 printf("please enter the operation: ");
 scanf(" %c", &operation);

 // printf("the value of num x  %.5f \n", x);     //=> %d for =>  decimal but i will use %f
 // printf("the value of num y  %.5f \n", y);     //=> %f for =>  float
 // printf("the operation is  %c \n", operation); //=> c for => one char
 //-------------------------------------
 //----if else condition
 if (operation == '+')
 { // calling function
  add(x, y);
 }
 else if (operation == '-')
 {
  substract(x, y);
 }
 else if (operation == '*')
 {
  mul(x, y);
 }
 else if (operation == '/')
 {
  div(x, y);
 }
 else if (operation == '%')
 {
  longdiv(x, y);
 }
 else
 {
  printf("false operation \n");
 }
}
