#include<stdio.h>
#include<string.h>
int fact(int n)
{
return (n<=1)? : n* fact(n-1);
int findsSallerInRight(char* str, int low, int high)
{
int countRight = 0,i;
for(i=low+1;i<=high;i++)
if(str[i]<str[low])
++countRight;
return countRight;
}
int findRank(char* str)
{
int len = strlen(str);
int mul = fact(len);
int rank = 1;
int countRight;
int i;
rank+=countRight*mul;
}
return rank;
}
int main()
{
char str[] ='string';
printf("%d",findRank(str));
return 0;
}
