#include<stdio.h>
void main()
{
float a;
printf("Enter the marks of the kid\n");
scanf("%f",a);
if(a<85)
{
printf("Grade A");
}
else if(a<70)
{
printf("Grade B");
}
else if(a<55)
{
printf("Grade C");
}
else if(a<40)
{
printf("Grade D");
}
else 
{
printf("Grade F");
}
}

