#include<stdio.h>
#include<conio.h>
voidmain()
{
int n;
printf("enter a numder:");
scanf("%d",&n);
if(n>0)
{
printf("positive");
}
elseif(n<0)
{
printf("negetive");
}
else
{
printf("zero");
}
getch();
}
