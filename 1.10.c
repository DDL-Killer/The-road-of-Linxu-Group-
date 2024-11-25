#include <stdio.h>
void main()
{
    int x,y,z,min;
    printf("Please input three numbers x,y,z:");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y)
    min = y;
    else
    min = x;
    if(min>z)
    min = z;
    printf("%d",min);
}