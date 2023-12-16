#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int guess_num;
int random_num;
double square_root;
char c;


int GetGuess()
{
	srand(time(NULL)); //to change the value of rand, otherwise rand was generating the same number.
	random_num = rand() % 91 + 10;
	square_root = sqrt(random_num);
	return 0;
}


void PlayGuessingGame()
{
	printf("%.3f is the square root of what number? ", square_root);
	scanf("%d", &guess_num);
	while (guess_num != random_num)
	    	{
	           if (guess_num > random_num)
	           	 {
	               printf("too high, guess again: ");
	           	 }
	           else
	           	 {
	               printf("too low, guess again: ");
	           	 }
	           scanf("%d", &guess_num);
	    	}
	printf("you got it baby!\n");
}


int main()
{
	printf("Welcome! Press q to quit or any key to continue: ");
	scanf("%s", &c);
	while (c != 'q')
		{
			GetGuess();
			PlayGuessingGame();
			printf("Press q to quit or any key to continue: ");
			scanf("%s", &c);

		}
	printf("Bye Bye !");

}

