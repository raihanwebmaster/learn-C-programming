#include<stdio.h>

int main(){

   int  marks_english ;
   int marks_math;
   //marks_english = 50;
   //marks_math = 70;

   printf("Enter Marks in English: "); //promt
   scanf("%d", &marks_english);

   printf("Enter Marks in Math: ");
   scanf("%d", &marks_math);

   printf("Enter Marks in English and Math: "); //promt
   scanf("%d %d", &marks_math, &marks_english);

   int total_marks = marks_english + marks_math;
   printf("%d\n", total_marks);

   float temparature;
   printf("Enter Your city weather: ");
   scanf("%f", &temparature);
   printf("%f", temparature);

   return 0;

}
