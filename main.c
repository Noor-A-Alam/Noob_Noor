
//Ternary Operator

#include <stdio.h>
int main(void)
{
int a,b,c;
printf("Enter three integer numbers: ");
scanf("%d %d %d",&a,&b,&c);
a>b?(b>c? printf("%d",b):printf("%d",c)):(c>a?printf("%d",c):printf("%d",a));
}