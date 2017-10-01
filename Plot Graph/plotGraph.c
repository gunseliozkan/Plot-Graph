#include <stdio.h>
void drawFunction(int xAxis, int yAxis, int functionNumber);
int fTheFunction(int x, int functionNumber);

int main()
{
	drawFunction(70,50,1);
	return 0;
}

void drawFunction(int xAxis, int yAxis, int functionNumber)
{
	/*yCount and xCount for y and x axis*/
	int yCount,xCount;

	for(yCount=1; yCount<=yAxis-1; yCount++)
	{
		/*first of all, print out the y axis*/
		printf("|");

		/*then it enters loop for x axis*/
		for(xCount=1; xCount<=xAxis; xCount++)
		{
			/*yAxis-yCount because loop starts from up but i need it
			  to start from below-in order to print the right function*/
			/*functionNumber doesn't bother me*/
			if(yAxis-yCount==fTheFunction(xCount, functionNumber))
				printf("*");
			else
				printf(" ");
		}
		/*goes to a new line*/
		printf("\n");
	}
	/*to print the last line of y axis*/
	printf("|");
	/*to print the x axis*/
	for(xCount=1; xCount<=xAxis; xCount++)
	{
		printf("-");
	}
	printf("\n");
}

int fTheFunction(int x, int functionNumber)
{
	int result;
	result = x*x;
	return result;
}
