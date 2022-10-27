#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice(void);
enum Status {CONTINUE,WON,LOST};
void main()
{
	int sum,mypoint;
	enum Status gameStatus;
	srand(time(NULL));
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}
	while (gameStatus == CONTINUE)
	{
		sum = rollDice();
		if (sum == mypoint)gameStatus = WON;
		else {
			if (sum == 7) gameStatus = LOST;
		}
	}
	if (gameStatus == WON) printf("player wins\n");
	else printf("player losts\n");
	system("pause");
	return 0;
}
int rollDice(void)
{
	int die1, die2, worksum;
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;
	printf("Player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}
