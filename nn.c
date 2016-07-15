
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double temp,temp1;
//float median;
int i,count=0, median=0,log2;
clrscr();
scanf("%lf",&temp);
temp1=1<<log2;
for(i=0;i<64;i++)
{
if((temp1 && ((1<<i)=temp1)))
  {
count++;

}
}
median = pow(2,(1<<(count/2)));


printf("median:%f",median);
getch();
}
