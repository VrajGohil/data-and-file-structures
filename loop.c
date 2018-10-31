#include<stdio.h>

int main()
{
	int a,b,c=0;
	printf("Enter A Value\n");
	scanf("%d",&a);
		while (a)
			{
				b=a%10;
				a=a/10;
				c+=b;
			}
		printf("Sum Of Number is %d\n", c);

} 
	 
