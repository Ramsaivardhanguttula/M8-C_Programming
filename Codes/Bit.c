#include<stdio.h>
int set_Bit(int num1,int num2)
{
    return (num1 | (1 << num2));

};

int clear_Bit(int num1, int num2)
{
    return(num1 & (~(1<<num2)));
}
int toggleBit(int num1, int num2)
{
    return (num1 ^ (1 << (num2 )));

}
int get_Bit(int num1 , int num2){
    return(num1 & (1<<( num2)));
}
int main()
{
    int num1,num2;
    scanf("%X\t%X",&num1,&num2); 

    printf("%d with %d-th bit Set: %d\n",num1, num2, set_Bit(num1, num2));
    printf("%d with %d-th bit Cleared: %d\n",num1, num2, clear_Bit(num1, num2)); 
    printf("%d with %d-th bit toggled: %d\n",num1, num2, toggleBit(num1, num2));
   //printf("%d with %d-th bit : %d\n",num1, num2, get_Bit(num1, num2));
   if(get_Bit(num1,num2)>=1)
   {
       printf("1\n");
   }
   else
   {
       printf("0\n");
   }
    return 0;
}