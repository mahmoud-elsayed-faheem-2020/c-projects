#include <stdio.h>
#include <stdbool.h>
void main()
{
 //-------------------------------------
 //----data type
 int x;
 float y;
 double y2;
 bool z = true;
 // printf("the value is  %d \n", z);    //=> if true =1 ,if false =0
 //-------------------------------------
 //----printf and scanf
 printf("please enter the value of intger x : ");
 scanf("%d", &x);
 printf("please enter the value of float y : ");
 scanf("%f", &y);
 printf("please enter the value of double y2: ");
 scanf("%.5f", &y2);
 //------------------------------------
 //----for loop
 for (int i = 0; i < 1; i++)
 {
  printf("the value of y is  %.5f \n", y);  //=> f for =>  float
  printf("the value of y2 is  %lf \n", y2); //=> lf for => selected double
 }
 //-------------------------------------
 //----if else condition
 if (x == y)
 {
  printf("the value of x = y equal \n");
 }
 else if (x > y)
 {
  printf("the value of x > y \n");
 }
 else
 {
  printf("the value of x < y \n");
 }
 //-------------------------------------
 //----switch case
 switch (x)
 {
 case 27:
  printf("the switch case for x is equal to 27 \n");
  break;
 case 26:
  printf("the switch case for x is equal to 26 \n");
  break;
 default:
  printf("the switch case for x is not equal to saved number \n");
  break;
 }
 //-------------------------------------
 //----while loop
 while (x < 20 && x > 15)
 {
  printf("print from while loopthe value of x = %d \n", x);
  x--;
 }
 //----do  while loop
 do
 {
  printf("print from do while loop the value of x = %d \n", x);
  x--;
 } while (x >= 20);
 //-------------------------------------
 // break  ==> exit the loop
 // continue ==> stop and back to the condition
 //-------------------------------------
}