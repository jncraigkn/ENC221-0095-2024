#include <stdio.h>
int main()
{

   int age;
   float height;
   char grade;

   age = 29;
   height = 177.7;
   grade = 'A';

   printf("Sum of age and height is: %.3f\n", age + height);
   printf("Subtraction of age and height is: %.3f\n", age - height);
   printf("grade is: %c\n", grade);
   if(age>height)
   {
      printf("age is greater than height\n");
   }
   else{
      printf("age is less than height \n");
   }
   

   return 0;
}

















