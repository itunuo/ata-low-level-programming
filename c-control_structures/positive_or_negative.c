#include <stdio.h>

int main(){
// Checking if a number is positive or negative
    /*
    int numb;
    printf("Enter a number; ");
    scanf("%d", &numb);
    
    if (numb < 0){
        printf("%d is a Negative number", numb);
    }else{
        printf("%d is a Positive number", numb);
    }
    */
    
// Checking whether a number is even or Odd
    /*
    if (numb % 2 == 0){
        printf("\n %d is a Even number", numb);
    }else{
        printf("\n %d is a Odd Number", numb);
    }
    */

// Largest of three numbers
    /*
        int a, b, c;
    printf("Enter the first number; ");
    scanf("%d", &a);
    printf("\nEnter the second number; ");
    scanf("%d", &b);
    printf("\nEnter the third number; ");
    scanf("%d", &c);

    if (a > b && a > c){
        printf("%d is the biggest number.", a);
    }else if (b > a && b > c)
    {
        printf("%d is the biggest number. ", b);
    }else
    {
        printf("%d is the biggest number. ", c);
    }

    */
// sum of natural numbers
    /*
        int d;
    printf("Enter a number; ");
    scanf("%d", &d);

    int sum, i;
    sum = 0;
    i = 1;

    while (i < d)
    {
        // code
        sum = sum + i;
        i++;
    }
    printf("Sum of numbers up to %d is %d", d, sum);
    */

// Finding the Factorial 
    /*
        int j, fact, num;
    fact = 1;
    j = 1;

    printf("Enter a non-negative number; ");
    scanf("%d", &num);

    while (j < num)
    {
        // code
        fact = fact * j;
        j = j + 1;
    }

    printf("The factorial of %d = %d", num, fact);
    */
    
// multiplication table
    /*
        int times,table;
    printf("Enter a number: ");
    scanf("%d", &times);

    for (size_t i = 1; i < 13; i++)
    {
    // code
        table = times * i;
        printf("%d x %d = %d\n", times,i,table );
    }
    */

// Digital Counter
    /*
        int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Special case for 0
    if (num == 0) {
        count = 1;
    } else {
        do {
            num /= 10;
            count++;
        } while (num != 0);
    }

    printf("Number of digits: %d\n", count);
    */

// Vowel or Consonant
   /*
       char alpha;

    printf("Enter a character; ");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha =='i' || alpha =='o' || alpha =='u')
    {
        // code 
        printf("%c is a vowel letter", alpha);
    }else{
        printf("%c is a consonant letter", alpha);
    }
   */

// Leap Year Checker
    /*
        int year;

    printf("Enter a year; ");
    scanf("%d",&year);

    if (year % 4 == 0)
    {
        // code
        printf("%d is a leap year", year);
    }else{
        printf("%d is not a leap year", year);
    }
    */

// Grade Calculator
    /*
    int score;
    char grade;

    printf("Enter a score between 1 - 100; ");
    scanf("%d", &score);

    if (score >= 70)
    {
        // code
        grade = 'A';
        printf("Grade = %c", grade);

    }else if (score >=60 && score < 70)
    {
        // code
        grade = 'B';
        printf("Grade = %c", grade);

    }else if (score >= 50 && score < 60)
    {
        // code
        grade = 'C';
        printf("Grade = %c", grade);

    }else if (score >= 45 && score < 50)
    {
        // code
        grade = 'D';
        printf("Grade = %c", grade);

    }else if (score >= 40 && score < 45)
    {
        // code
        grade = 'E';
        printf("Grade = %c", grade);

    }else{
        grade = 'F';
        printf("Grade = %c", grade);
    }
    */

// Simple Calculator Switch
    /*
        int num1, num2, result;
    char op;

    printf("Choose an operator (+ , - , / , *); \n");
    scanf("%c", &op);

    printf("Enter two numbers; ");
    scanf("%d/n", &num1);
    scanf("%d", &num2);


    
    if (op == '+')
    {
        // code
        result = num1 + num2;
        printf("Result = %d", result);
    }else if (op == '-')
    {
        // code
        result = num1 - num2;
        printf("Result = %d", result);
    }else if (op == '*')
    {
        // code
        result = num1 * num2;
        printf("Result = %d", result);
    }else if (op == '/')
    {
        // code
        result = num1 / num2;
        printf("Result = %d", result);
    }
    */


// Menu-Driven Shape Area Calculator
    /*
        int opt ;
    float area;
    puts("Menu:");
    printf("1. Calculate area of a circle.\n2. caculate the area of a triangle\n3. calculate the area of a rectangle\n4. Exit\n");
    printf("Choose any of the options; ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        // code
        int radius; 

        printf("Enter the radius of the circle; ");
        scanf("%d", &radius);

        area = 3.142 * radius * radius;

        printf("Area of this circle = %f", area); 
        break;
    case 2: 
        int base, height;

        printf("Enter the base of the triangle; ");
        scanf("%d", &base);
        printf("Enter the height of the triangle; ");
        scanf("%d", &height);

        area = 0.5 * base * height;

        printf("Area of this triangle = %f", area);
        break;
    
    case 3:
        int length, breath;
        printf("Enter the length of this rectangle; ");
        scanf("%d", &length);
        printf("Enter the breath of this rectangle; ");
        scanf("%d", &breath);

        area = length * breath;

        printf("Area of this rectangle = %f", area);
        break;
    
    case 4:
        printf("Exit");
        break;
 
    default:
        printf("Enter a valid number between 1 , 2, 3 and 4 😫");
    }
    */

        

// Prime Number checker
    /*
        int num; 

    printf("Enter a positive integer; ");
    scanf("%d", &num);

    for (size_t i = 2; i < 5; i++)
    {
        // code
        if (num == 1 || num == 2 || num == 3 || num == 4 || num == 5)
        {
            // code
            printf("%d is a prime number", num);
        }else if (num % i == 0){
            printf("%d is a prime number", num);
        }else{
            printf("%d is not a prime number", num);
        }
    }
    */
    

// Skip even numbers with continue
    /*
    for (int i = 1; i < 20; i++)
    {
    // code
    if (i % 2 == 0)
    {
        // code
        continue;
    }else{
        printf("%d \n", i);
    };
    
    };
    */

// ternary equation
    int number;

    printf("Enter an integer; ");
    scanf("%d", &number);

    (number < 0) ? 
            printf("%d is a negative number.", number) :
            printf("%d is a positive number.", number);    

}