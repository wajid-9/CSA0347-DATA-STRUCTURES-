 #include<stdio.h>
int main()
{
	int n,originalnum,sum=0,r;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	originalnum=n;
	while(originalnum!=0)
	{
	  r=originalnum%10;
	  sum=sum+(r*r*r);
	  originalnum=originalnum/10;	
	}
	if(sum==n)
	printf("%d is a armstrong number",n);
	else
	printf("%d is not a armstrong number",n);
}
