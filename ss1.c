#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10][10],e=0,m,i,j,n,t=0;
scanf("%d %d",&m,&n);
for(i=0;i<n*m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m*n;i++)
{
for(j=i+1;j<n*m;j++)
{
if(a[i]>a[j])
{

{
for(j=0;j<n;j++)
{
printf(" %d",b[i][j]);
}
printf("\n");
}
getch();
}
