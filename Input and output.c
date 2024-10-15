#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a, b, c, d;
printf("Enter the first value : ") ;
scanf("%d" , &a);
printf("Enter the second value : ");
scanf("%d" , &b);
printf("Enter the third value :");
scanf("%d" , &c);
d=a+b+c ;
printf("%d+%d+%d = %d\n" , a , b , c);
    return 0;
}
