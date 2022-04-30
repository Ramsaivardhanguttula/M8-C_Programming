#include<stdio.h>
#include<math.h>
int quadrant(int x, int y)
{
 
    if (x > 0 && y > 0)
        printf( "lies in First quadrant\n");
 
    else if (x < 0 && y > 0)
        printf ("lies in Second quadrant\n");
 
    else if (x < 0 && y < 0)
        printf ("lies in Third quadrant\n");
 
    else if (x > 0 && y < 0)
        printf ("lies in Fourth quadrant\n");
 
    else if (x == 0 && y > 0)
        printf ("lies at positive y axis\n");
 
    else if (x == 0 && y < 0)
        printf ("lies at negative y axis\n");
 
    else if (y == 0 && x < 0)
        printf ("lies at negative x axis\n");
 
    else if (y == 0 && x > 0)
        printf ("lies at positive x axis\n");
 
    else
        printf ("lies at origin\n");
}
int Distance(int x, int y)
{
    float distance =sqrt(pow(x,2)+pow(y,2));
    printf("Distance from origin is %f\n", distance);
}
int main()
{
    int x, y;
    scanf("%d %d",&x,&y);
    // Function call
    quadrant(x, y);
    Distance(x, y);
    return 0;
}