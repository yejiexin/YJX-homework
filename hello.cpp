#include<stdio.h>
#include<math.h>
double sin(double x){
double x3,f3;
double x5,f5;
double x7,f7;
double res;
x3 = power(x,3);
x5 = power(x,5);
x7 = power(x,7);
f3 = factorial(3);
f5 = factorial(5);
f7 = factorial(7);
res = x-x3/f3+x5/f5-x7/f7;
return res;
}

 
   

