#include<stdio.h>

int Triangle(int side1,int side2,int side3)
{
  int count=0;
   
   if((side1+side2)>(side3)||(side2+side3)>(side1)||(side1+side3)>(side2))
   {
      count++;
   }
   while(count)
   {
   if(side1 == side2 && side2 == side3)
      printf("The Given Triangle is equilateral\n");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The given Triangle is isosceles\n");
    else if(((side1*side1)==(side2*side2)+(side3*side3))||((side2*side2)==(side1*side1)+(side3*side3))||((side3*side3)==(side2*side2)+(side1*side1)))
        printf("The given Triangle is Right Angled\n");
   else
      printf("The given Triangle is scalene\n");
   return 0;
   }
   printf("Triangle cannot be formed\n");  
}

int main(){
   int side1, side2, side3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   Triangle(side1, side2, side3 );
   
}