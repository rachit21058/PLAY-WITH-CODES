#include<stdio.h>
int main()
{
int i,j,n,m,a[10];
printf("ENTER THE NUMBER OF ELEMENTS IN SET A:");
scanf("%d",&n);
printf("NOW ENTER THE ELEMENTS IN SET A:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("THE VALUE OF SET A IS:%d\n",a[i]);
}
printf("ENTER THE NUMBER OF ELEMENTS IN SET B\n:");
scanf("%d",&m);
printf("NOW ENTER THE ELEMENTS IN SET B:\n");
for(j=0;j<m;j++)
{
    scanf("%d",&a[j]);
}
for(j=0;j<m;j++)
{
    printf("THE VALUE OF SET B IS:%d\n",a[j]);
}
    
return 0;
} 