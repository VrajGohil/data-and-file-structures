#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char a[3]={ 'j','q','k'};
	int g;
	int bet;
	int x=100;
	int v;
	printf("Enter your bet amount :");
	scanf("%d",&bet);
	printf("there are the cards Jack Queen and King\n");
	
	while(x!=0 && x>0)
	{	printf("\nQueen is at postion 1. now..shuffling........\nguess the postion of queen now\n");
		scanf("%d",&g);
		v=rand()%3;
		v++;

		if(v==g)
		{
			x=x+3*bet;
			printf("You won, current bet is %d\n",x);
		}
		
		else
		{
			x=x-5;
			printf("You loss, current bet is %d\n",x);
		}
	}	
}
