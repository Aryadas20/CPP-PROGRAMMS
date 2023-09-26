#include<stdio.h>

int main(){



unsigned int x=0;

if(x>-1)
printf("True");

else
printf("False");


int a = 1;

int b = 1;

int c =a || --b;

int d = a-- & --b;
printf("%d,%d,%d,%d", a, b, c, d);


 printf("%d", 1 << 2 + 3 << 4);

 int x=0,y; //32 bit
y=sizeof(++x);
printf("%d,%d",x,y);

int x=3;
while(x--)
{
static int x=100;
printf("%d ",--x);
}

int x=-1; 
printf("%d",x>>4);

int x=0;
if(++x)

printf("%d ",x++);
else;

printf("%d ",++x);

int x;
x=5,7,247;
printf("%d",x);

int x=0,y=0,z;
z=~x+~y;
printf("%d",z);
}