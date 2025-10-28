#include <stdio.h>
#include <math.h>

int main() {
 // print name
   /*
    printf("Hello World!\n"); 
    printf(" Insert your name:"); 
    char name[10]; 
    scanf("%s", name); 
    printf("Your name is %s\n", name); 
   */

// a progam that adds two integers
   /*
    int x,y, Result;
    printf("first number: ");
    scanf("%d\n", &x);
    printf("Second Number");
    scanf("%d", &y);
    Result = x + y ;
    printf("The sum of the numbers is : %d", Result );
   */
//   Find the area

   /*
   float radius;
   float area; 
   float pie = 3.142; 
   printf("insert the radius of the circle\n");
   printf("Radius: ");
   scanf("%f", &radius);
   area = pie * (pow(radius,2));
   printf("Area = %f", area); 
   
   */

// Student Information
   /*
      int age;
   float grade;
   char name[10];
   printf("Enter Your Name here; ");
   scanf("%s",name);
   printf("Enter Your grade; \n");
   scanf("%f", &grade);
   printf("Enter Your age; \n");
   scanf("%d", &age);

   printf("Hello %s Your grade is %f and you are %d years old", name, grade, age);

   */
// Calculate temp
   /*
   float temp, farenhiet;
   printf("Let's convert your temp from celsius to farenhiet\n");
   printf(" Enter your temperature: ");
   scanf("%f", &temp);
   farenhiet = 32+(1.8*temp);
   printf("%f degree celsius = %f degree farenhiet", temp, farenhiet);

   */

// Simple Interest Calculator
  /*
     int principal, rate, time;
   float interest; 
   printf("Lets help you calculate your interest. \n ");
   printf("Enter your Principal here: ");
   scanf("%d", &principal);
   printf("For how long do you want to keep the principal? ");
   scanf("%d", &time);
   printf("At what rate? ");
   scanf("%d", &rate);

   interest = (principal*time*rate)/100;

   printf("At %d , the interest is %f", principal, interest);
  */

// ASCII characters
   /*
   char character;
   printf("lets help with converting your characters to ASCII numbers");
   printf("Enter a single character: ");
   scanf("%c", &character);
   printf("The ASCII of %c = %d", character, character);
   */
   
// find the sum, difference, product, remainder and quotient of two integers
   /*
   int a, b, sum, diff, product, quotient, remainder;
   printf("Enter first number;  ");
   scanf("%d", &a);
   printf("Enter second number; ");
   scanf("%d", &b);
   sum = a +b;
   printf("Sum = %d\n", sum);
   diff = a - b;
   printf("difference = %d\n", diff);
   product= a * b;
   printf("Product = %d\n", product);
   quotient = a / b;
   printf("Quotient = %d\n", quotient);
   remainder = a % b ;
   printf("Remainder = %d", remainder);
   */

// check if even or odd
   int a,b,rem ;
   printf("Your number checker is here\n");
   printf("Enter your number");
   scanf("%d", &a);
   rem = a % 2;
   if (rem == 0){

      printf("%d is an even number", a);
   }
   else {
      printf("%d is an Odd number", a);
   
   };   

}