#include<stdio.h>
#include<conio.h>
void main()
{static int a[10][10];
int i,j,m,n,s=0;
clrscr();
printf("Enter the order of the matrix");
scanf("%d%d",&m,&n);
printf("Enter the co-efficients of the matrix");
for(i=0;i<m;++i)
{for(j=0;j<n;++j)
{scanf("%d",&a[i][j]);
}}for(i=0;i<m;++i)
{for (j=0;j<n;++j)
{sum=sum +a[i][j];
}}printf("Sum of %d row is =%d\n",i,sum);
sum=0;
}sum=0;
for(j=0;j<n;++j)
{for(i=0;i<m;++i)
{sum=sum+a[i][j];}}
printf("Sum of %d columns =%d\n",j,sum);
sum=0;
getch();
}