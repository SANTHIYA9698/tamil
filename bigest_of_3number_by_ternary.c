#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter the 3 number \n");
scanf("%d %d %d",&a,&b,&c);
d=a>b?(a>c?a:c):(b>c?b:c);
printf("Biggest value is : %d", d);
getch();
}
