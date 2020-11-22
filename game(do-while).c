#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	 int answer = 59, i, trial = 0;


    do{

     printf("guess a number: ");
      scanf("%i", &i);

	 if(i< answer)
	 printf("high!\n");

	 else if(i> answer)
	 printf("low!\n");

	 trial++;


	} while ( i !=answer);
	printf(" congratulations!  the number of trial: %i", trial );

	return 0;
	
}
