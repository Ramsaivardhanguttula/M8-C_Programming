#include<stdio.h>
void gswap(void*ptr1,void*ptr2, int size)
{

    char *p1 =(char*)ptr1;
    char *p2 = (char*)ptr2;
    char temp;

     for(int i=0;i<size;i++)
    {
       temp=p1[i];
       p1[i]=p2[i];
       p2[i]=temp;
    }
}
int main()
{
    int a=10, b=20;
    char c='A', d = 'B';
    float e = 1.5,f= 2.5;
    int a1[2]={2,4}, a2[2]={3,5};
    gswap(&a, &b, sizeof(a));
    printf("After swapping value of a and b is %d %d:",a,b);

    gswap(&c, &d, sizeof(c));
    printf("\nAfter swapping value of c and d is: %c %c\n",c,d);

    gswap(a1,a2,sizeof (a1));
    for(int i=0 ; i<2;i++)
    {
        printf("%d %d\n",a1[i],a2[i]);
    }
    printf("\nAfter swapping value of e and f is: %0.2f %0.2f\n",e,f);
    return 0;
}