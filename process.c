#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];

int main(void){
  // 필요한 변수들 정의 
  int i, j;
  char b, w;
  b = '@'; // 검정색 알
  w = 'O'; // 하얀색 알 
  
  for(i=0; i<N; i++)
     for(j=0; j<N; j++) {
     	gameboard[i][j];     	
	 }

// 출력 함수	 
void print_othello (char a[N][N]){
     char *ptr;
     ptr = &a[0][0];
 printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", *ptr );
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }
}
    // 게임 초기화_ 정중앙 4칸에 흰색 검정색 알을 2개씩 대각선 모양으로 배치
void init_othello(char gameboard[][N])
{

   gameboard[N/2][N/2] = b;
   gameboard[N/2][N/2 + 1] = w;
   gameboard[N/2 + 1][N/2] = w;
   gameboard[N/2 + 1][N/2 + 1] = b;
   
  print_othello(init_othello); // 출력함수 호출  
  
  return 0;
}
     
 

	    
   
}


