//Program to prist 1 to 100 using Loop.

#include <stdio.h>

int main () {

for (int i=1; i<=10; i++)
printf ("%d", i);

return 0;

}


//program to find sum  of first 10 natural numbers

#include <stodier.h>

int main() {

int sum = 0;
for (int i=1; i <= 10; i++)
sum = sum +i;

printf("Sum = %d", sum);

return 0;

}


// WAP to find factorial of  a number

#include <stdio.h>

int main () {

int n, fact =1;
printf ("enter  a number: ");
scanf("%d", &n);
 
for (int i = 1; i<= n; i++)
fact == i;

printf ("Factorial =%ď", fact);

return 0;
}

//WAP to find fibonacci series

#include <stdio.h>

int main () {

int n, alpha = 0 , b = 1 , C;

printf ("enter terms: ");
scanf("%d", &n);

printf ("%d %d", a,b);
for (int i = 2 ; i<n; i++) {
c = a + b

printf ("%d", c),
a =b:
b = c

}

return 0;

}

WAP to chick armstrong number

#include <stdio.h>
#include <math.h>

int main () {

int num, sum = 0, temp, r;
printf ("enter number: ");
scanf ("%d", & num),
temp = num;

while (temp!=0) {
r = tempr %10;
A sum += rrr;
temp 1 = 10;
}

if (sum == num)
printf ("Armstrong number");

else
printf ("not armstrong")

return 0;
}

//WAP to chick the number is Prime ar mot

#include <stdio.h>

int main() {

int num, i

printf ("enter a number: ");
scanf("%d", & num);

if (num <=1) {
printf ("%d is not a prime number.", num);
return 0;
}

for (i=2; i <= num2; i++) 
if (num % i == 0) {
printf ("%d if not a prime number.",num),
return 0;
 }
}
{
printf ("%d is a prime number", muma);

return 0;
}

//WAP to  reverse a number.

#include <stdio.h>

int main () {

int num, rev= 0, r;
printf ("inter number: ");
scanf("%d", & num);

While(num!=0) {
r = num%10;
rev = rev * 10 +r;
num1=10;

}

printf ("Reverse = %d", &rev);
 return0; 

}


// WAP to find GCD

#include <stdio.h>

int main () {

int n1, n2, r,
printf (" enter two number: ");
scanf ("%d %d", &n1, &n2);

while (n2!=0) {
r = n1% n2,
n1=n2;
n2 = r ;

}

printf ("GCD=%d", n1);

return 0;

}

//WAP to sort an array of 10 integers in ascending order using pointers

#include <stdio.h>

void swap int* a

{
int i, j, Z;
For= (i=0; i<10; i++)
{
for (j=0; j <9; j++) 
{
If(* (a+j)>* (a + j + 1) )
{
z=^ * (a + j) :

*(a+j)=^ (a + j + i) ;

 ** (a + j + 1) = 2
                   }
                }
            } 
          }

int main () {

int a [a{10}] =  {10, 9, 8 ,-1,-10,19, 20, 5, 11, 20};

int i;
swap (a);}

WAP to copy the details of into another structure variable ONL structure variable

#include <stdio.h>
#include <string.h>

struct student.
{
char name [20];
int roll;

float marks,
}
 
int main()
{
struct student 51,52;

Stropy (51 name, "Rahul");

51. roll = 1040;
51. marks=75;

52=51,

printf ("In %.5%d %f", 52. name, 52 roll, 52. marks);

return 0;
}

// WAP to find number Largest among three numbers

#include <stdio.h>
int main() {

int a, b, c;
printf ("enter numbers: ");
scanf ("%d%d%d", &a, &b, &c);

if (a>b && a>c)
printf ("%d is largest", a);

else if (b+c)
printf ("%d is largest", b);

else
printf ("%d is largest", c);

return 0;
 
}

//WAP to convert an uppercase string into lowercass string 

#include <stdio.h>

void  to lowercase. (char str []) {
int i = 0;
While(str[i]='/o') {
if (str[i] > = 'A' && str[i] < = 'z') {
str [i] = str. [i] +32;
}
i++;
     }
 }

int main() {
char str [100];

printf("enter an uppercase string: );
gets (str)

to lowercase (str);
printf("enter Lowercase string : %d\n, str);

return 0;
}

//WAP to print Table of a numbe

#include <stolio.h>
int main () {

int n;
printf ("enter a number: ");
scanf ("%d", &n);

for (int i=1; i<= 10; i++)
printf ("%d x %d = %d\n", n,i, n * i);

return 0;

}


//WAP to calculatr with HRA and DA Grass salary based on conditions Basic salary

#include <stdio.h>

int main (){
float basic, hra , da, gross;

printf("Enter the basic salary: ");
scanf ("%f", & basic);

if (basic > 20000) {
hra= 0.25 basic;
da=0.50 basic;

}
else{
hra. = 0.15 basic;
da=0.30 basic;
}  

gross = basic + hra+ da;

printf ("Gross salary = %f 2 fr", gross);

return0;
}

// WAP to find simple interest

#include <stdio.h>

int main() {
float p, r, t, si;

printf (" enter principal, rate, time: ");
scanf ("%f %f %f", &p, &r, &t);

Si = (p*r*t)/100;

printf ("Simple interest = %f", si);

return 0;
}


WAP to print reverse number pattery using nested.

#include <stdio.h>

int main (){
int i,j;

for (i=5; i >=1; i--) {

for (j=i;j >=1;j--) {

printf ("%d", j);
}
printf ("\n"),
}
return 0;
}

//AP to swap two numbers using well by reference

#include <stdio.h>

void swap (int x, int *y) {
int z;
z=*x
*x=*y;
 *y =z;
}

int main () {
int a=10, 6=20
swap (&a, &6),
printf ("%d%d", a, b),

return 0;

}

//The main diagonal. WAP to calculate the sum of elements of 3x3 matrise

#include <stdio.h>

int main (){

int a [3] [3], r, c, sum = 0 ;

printf ("enter matrix element: \n");
for (r=0, r < 3 ; r++)
for ( c = 0 c < 3 ;c++)
scanf("%d", & a[r] [c]);

for ( r = 0 ; r < 3 ; r++)
{
sum+=a[r][r]; 
}
printf ("sum of diagonal elements = %d\n", sum),

return0;
}

//WAP to count the number of digits in a given  number using logarithm function


#include <stdio.h>
#include <math.h>

int main () {
int num, count;
printf ("enter a number: ");
scanf("%d", & num);

if (num == 0)
count = 1;

else
count = (int) log 10 (alis(num)) + 1;

printf ("number of digits: %d\n", count);

return 0;
}

//WAP to display a message based on age using switch case

#include <stdio.h>

int main () {
int age;

printf("Enter your age: ");
scanf ("%d", & age);

switch (age){
case 18;
              printf (" you are 18 years old. In");
break;

case 20;
               printf ("You are 20 years old. \n");
break; 

case 22;
              printf ("You are 22 years old. In");
break,

default;
             printf ("Your age is neither 18, 20, mar 22.\n");
break;
}
return 0;
}

//WAP to find maximum number is an array

#include <stdio.h>

int main () {
int arr (5), i, max;

printf ("enter 5 numbers \n");
for (i = 0; i < 5; i++)
scarf ("%d", & arr[i]);

max = arr[0];
for (i=1; i<5; i++)
if (arr[i]>max)
max = arr[i];

printf ("maximum number = %d", max);

return 0;
}

//WAP to find increment of a number

#include <stdio.h>

void increment (int x). {
x=x+1;
printf ("inside function (incremented value ): %d\n",x)

}

int main() {
int a=7,

printf ("Before increment: %d\n", a);
increment (a);
printf ("After increment: %d\n", a);

return 0;
}

//WAP to print a number  numeric pattern using nested Loop.

#include <stdio.h>

int main() {
int i, j;

for (i=9; i >1; i--){
for (j=9; j>=i; j--){
printf ("%d", i);

}
printf ("\n");
}

return 0;
}

// project calculator

#include <stdio.h>

int main() {
    float num1, num2, result; // varaible identifier
    char operator;

    printf("ENTER YOUR FIRST NO :"); //for input 
    scanf("%f", &num1);            // for output 

    printf("ENTER YOUR SECOND NO :");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '-':
            result = num1 - num2;
            break;
        case '+':
            result = num1 + num2;   
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation");
            return 1;               
    }

    printf("Result: %f\n", result);
    return 0;

}

