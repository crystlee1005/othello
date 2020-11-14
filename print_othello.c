#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(void){
  // 필요한 변수들 정의 
  int i, j;
  char b, w;
  b = '@'; // 검정색 알
  w = 'O'; // 하얀색 알 
  
  for(i=0; i<N; i++)
     for(j=0; j<N; j++) {
     	print_othello[i][j] = b;    	
	 }

print_othello(함수);  // for문을 활용- N줄의 보드판을 출력하는 함수   
   
printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", 함수 [i][j]);
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }

	return 0;
}
