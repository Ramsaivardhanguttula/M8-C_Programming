#include<stdio.h>

int GCD(int n1, int n2)
{
    int i=0,gcd=0;
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}
int LCM(int n1, int n2)
{
    int lcm;
    lcm = (n1 > n2)? n1 : n2;
    
    while(1) //Alway True
    {
    	if(lcm % n1 == 0 && lcm % n2 == 0) 
    	{
    		// printf("L.C.M of %d and %d is %d\n", n1, n2, lcm);
    		break;
		}
		++lcm;
	}
    return lcm;    
}

int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    //GCD(n1,n2);
    //LCM(n1,n2);
    printf("G.C.D of %d and %d is %d\n", n1, n2, GCD(n1,n2));
    printf("L.C.M of %d and %d is %d\n", n1, n2, LCM(n1,n2));

    return 0;
}