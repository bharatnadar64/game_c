#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int game(char a,char b)
{
if(a==b)
	return 0;
else
	{
		if(a=='s'&&b=='p')
		return -1;
	else
		{
			if(a=='s'&&b=='x')
			return 1;
		else
			{
				if(a=='p'&&b=='s')
				return 1;
			else
			{
				if(a=='p'&&b=='x')
				return -1;
		else
		{
		if(a=='x'&&b=='s')
		return -1;
	else
	{
	if(a=='x'&&b=='p')
	return 1;
	}
		}
			}
			}
		}
	}
}


int main()
{
int n,i,k;
char u,c,cs=0,us=0;
	printf("                                            User vs Computer");
//	printf("________________________________________________________________________________");
	printf("\n\n                                        | Rules:same choice:0Win:1 |");
//	printf("________________________________________________________________________________");
	printf("\n\n                             Enter:->    S for stone P for Paper  X for Scissor");
	
do
	{
	srand(time(0));
	n=rand()%10+1;
	if(n<3)
		c='s';
	else
		{
		if(n>3&&n<6)
			c='p';
		else
			c='x';
		
		}
         
	printf("\n\n\nYour Choice:");
	fflush(stdin);
	scanf("%c",&u);
	i=game(u,c);
	if(i==-1)
		cs++;
	else
	  if(i==1)
		us++;
//	printf("\n________________________________________________________________________________");
	if(i==0)
		printf("\n                                               Game DRAW :[");
	else
	 {
		if(i==1)
			printf("\n                                            You WON!");
		else
			{
			if(i==-1)
				printf("\n                                        You LOSE :(");
		}
		
	}
	//printf("________________________________________________________________________________");
	printf("\n\n\n                                     You chose %c and computer chose %c",u,c);

	printf("\n\n                                        Scores    You:%d     Computer:%d",us,cs);
}
while(u);
/*printf("\n\n\n\t\tResult:\t");
if(us>cs)
	printf("You WON\tYou:%d\tComputer:%d",us,cs);
else
	if(us==cs)
	printf("Game Draw \tEqual scores..\nstart New game.");
		else
		printf("You LOSE\tYou:%d\tComputer:%d",us,cs);  */
getch();
return 0;

}
