#include<stdio.h>
#include<conio.h>
void traversing();
void insertion();
void deletion();

int main()
{
    int a[10],i,pos,n,num,choice;
    printf("enter the no. of elements in array\n:");
    scanf("%d",&n);
    printf("enter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      printf("elements are");  
     printf("%d\n",a[i]);
    }
    
    printf("\n 1.TRAVERSING");
    printf("\n 2.INSERTION");
    printf("\n 3.Deletion");
    printf("\n ENTER THE CHOICE");
    scanf("%d",&choice);
switch(choice)
{
    case 1:
    traversing(a,n);
    break;
    case 2:
    insertion(a,n);
    break;
    case 3:
    deletion(a,n);
    break;
    default:
    printf("\n WRONG CHOICE");
}

return 0;
}
void traversing(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("\t VALUES ARE:%d",a[i]);
}

void insertion(int a[],int n)
{
    int i,pos,num;
    printf("enter the number which hv to insert");
    scanf("%d",&num);
    printf("enter the position");
    scanf("%d",&pos);
    if(pos>n)
    printf("invalid case");
    else{
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    traversing(a,n);
} 
} 

void deletion(int a[],int n)
{
    int i,pos;
    printf("enter the position for deletion");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    a[i]=a[i+1];
    n--;
    traversing(a,n);
}