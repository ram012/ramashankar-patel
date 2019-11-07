#include<stdio.h>
#include<conio.h>
int main()
{

int a,b;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
a=a+b;
b=a-b;
printf("b=%d",b);

a=a-b;
printf("a=%d",a);
getch();
}
