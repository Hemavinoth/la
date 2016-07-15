#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,c=0,o=1,l,ch,p;
char a[100],b[100],val;
clrscr();
printf("Enter the 1st string:\n");
scanf("%s",a);
printf("Enter the 2nd string:\n");
scanf("%s",b);
while(o)
{
printf("1.insert\n");
printf("2.delete\n");
printf("3.replace\n");
printf("4.exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
if(c<19)
{
switch(ch)
{
case 1:
printf("The cost of the string is 4\n");
printf("Enter the position and value where wish to insert:\n");
scanf("%d",&p);
scanf("%c",&val);
l=strlen(a);
for(i=l-1;i>=p-1;i--)
{
a[i+1]=a[i];
}
a[l+1]='\0';
a[p-1]=val;
printf("After insertion:\n");
printf("%s",a);
c=c+4;
printf("Do you want to continue?y->1/no->0\n");
scanf("%d",&o);
break;
case 2:
printf("The cost is 3:\n");
printf("Enter the position to delete\n");
scanf("%d",&p);
l=strlen(a);
for(i=p-1;i<l;i++)
{
a[i]=a[i+1];
}
printf("After deleting\n");
printf("%s",a);
c=c+3;
printf("Do you want to continue?y->1/no->0\n");
scanf("%d",&o);
break;
case 3:
printf("The cost is 5:\n");
printf("Enter the position to replace and value\n");
scanf("%d",&p);
scanf("%c",&val);
a[p-1]=val;
printf("After replacing\n");
printf("%s",a);
c=c+5;
printf("Do you want to continue?y->1/n->0\n");
scanf("%d",&o);
break;
}
}
}
printf("total cost is %d",c);
getch();
}
