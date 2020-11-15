#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];  //gameboard 선언  
int i, j;  // 필요한 변수들 선언  
char b = '@';  // 검정색 알
char w = 'O';  // 하얀색 알	
char x = ' ';	   

// 출력 함수

//------ 아래 글은 신경 x , 혹시 몰라서 남겨둠ㅎ  
  //gameboard[N/2][N/2] = b;
   //gameboard[N/2][N/2 + 1] = w;
   //gameboard[N/2 + 1][N/2] = w;
   //gameboard[N/2 + 1][N/2 + 1] = b;	 
char print_othello (char a[N][N]){
     a[N][N];
	 char *p;
	    
	   
     p = &a[0][0]; // 포인터 p를 배열 a의 [0][0]번째 요소로  초기화  
     
     
 printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", *p );
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }
}

	    
// 게임 초기화_ 정중앙 4칸에 흰색 검정색 알을 2개씩 대각선 모양으로 배치    
char init_othello(char gameboard[][N])  // ---- ROW N 지울지 보류!!!!!!  
{  
    	 
	 for(i=0; i<N; i++)
     
	 for(j=0; j<N; j++) 
     	     		   
    if ((i == N/2 && j == N/2) || ( i == N/2 +1 && j == N/2 +1))
      gameboard[i][j] = b; 
    else if ((i==N/2 && j ==N/2 + 1) ||(i == N/2 + 1 && j == N/2))
      gameboard[i][j] = w;

    else gameboard[i][j]= x;


}

// 메인 함수_ 필요한 함수 호출  ----    
void main() { 
    printf("********othello**********\n"); // 게임시작을 알리는 문장 출력  
    printf("-> black stone : @\n"); //검정색 돌과 하얀색 돌이 무엇인지 알려주는 문장 출력  
    printf("-> white stone : O\n");	 
	 
	 init_othello;   // 초기 오델로 함수 호출 
	 print_othello(init_othello);  // 출력함수 호출
	 
}    



