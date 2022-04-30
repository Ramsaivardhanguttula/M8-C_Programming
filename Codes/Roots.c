# include<stdio.h>
# include<stdlib.h>
#include<math.h>
int main (){
   float a,b,c,r1,r2,d;
   double realPart, imagPart;
   printf ("Enter the values of a b c :\n");
   scanf ("%f %f %f", &a, &b, &c);
   d= b*b-4*a*c;
   if (d>0){
      r1 = -b+sqrt (d) / (2*a);
      r2 = -b-sqrt (d) / (2*a);
      printf ("The real roots = %0.3f %0.3f\n", r1, r2);
   }
   else if (d==0){
      r1 = -b/(2*a);
      r2 = -b/(2*a);
      printf ("roots are equal =%f %f\n", r1, r2);
   }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are imaginary\n");
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}