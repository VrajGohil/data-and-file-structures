#include<stdio.h>
#include<stdlib.h>


void PUSH(int s[], int *top, int val)
{
	if(*top<9)
	{
		(*top)++;
		s[*top]=val;
	}
	else
	{
		printf("Stack Full\n");

	}

}


int POP(int s[], int*top)
{	int val;
	if (*top>=0)
	{
		val=s[*top];
		(*top)--;
		return val;
	}
	else
	{
		printf("stack Empty!!!!!\n");
	}
	exit(-1);
}


void read(int s[], int top, int i)
{
	if(((top-i)+1)>=0)
		printf("%d\n",s[top-i+1]);
	else
		printf("not found!!!!!");
}

int main()
{
	int S[10];
	int TOP=-1;
	int x;
	int a;
	while(x!=0) {
		printf("Press 1.--->For Adding an Element \nPress 2.--->For removing an Element \nPress 3.--->To Read any Value \n");
		scanf("%d",&x);

		switch (x) {
			case 1:

				printf("Enter Your element\n");
				scanf("%d", &a);
				PUSH(S, &TOP, a);
				break;

			case 2:

				POP(S, &TOP);
				break;

			case 3:
				printf("Enter element you want to check:\n");
				scanf("%d", &a);
				read(S, TOP, a);
				break;

			default:
				break;
		}
		printf("Press 1.--->To Continue\nPress 0.--->To Exit:\n");
		scanf("%d", &x);

	}





}

