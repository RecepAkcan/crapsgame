#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	printf("Welcome to the Crapsgame.\n") ;
    system("pause") ;
	srand(time(NULL)) ;
	int dice1 , dice2 , points , secondPoints ;
	
	dice1 = ( rand() % 6 ) + 1 ;
	dice2 = ( rand() % 6 ) + 1 ;
	points = dice1 + dice2 ;
	
	if(points == 7 || points == 10)
	{
		printf("You roll %d and win\n",points) ;
		return 0 ;
	}
	if(points == 2 || points == 3 || points == 12)
	{
		printf("You roll %d and lose\n",points) ;
		return 0 ;
	}
	else
	    printf("You roll %d and game continues\n",points) ;
    for(int i = 0 ; i < 1000 ;i++)
		{
			system("pause");
			dice1 = ( rand() % 6 ) + 1 ;
			dice2 = ( rand() % 6 ) + 1 ;
			secondPoints = dice1 + dice2 ;
			if(points == secondPoints)
			{
				printf("You roll %d and win\n",secondPoints) ;
			    break ;
			} 
			if(secondPoints == 7)
			{
				printf("You roll %d and lose\n",secondPoints) ;
				break ;
			}
			else 
			{
				printf("You roll %d and game continues\n",secondPoints) ;
				i = i - 1 ;
			}
		}
}

