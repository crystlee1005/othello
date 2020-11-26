#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];  //gameboard 선언  
int i, j;  // 필요한 변수들 선언  
char b = '@';  // 검정색 알
char w = 'O';  // 하얀색 알	
char x = ' '; // 빈 칸
char start; // 시작 버튼 	   
int wR, wC, bR, bC; // 좌표입력을 위한 변수 

// 출력 함수 
	 
void print_othello (char a[N][N]){
     
     
 printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", a[i][j] );
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }
}

	    
// 게임을  초기화 하는 함수__ 정중앙 4칸에 흰색 검정색 알을 2개씩 대각선 모양으로 배치    
char init_othello(char a[N][N])   
{  
    
	 
	 for(i=0; i<N; i++){
     
	 for(j=0; j<N; j++) {
	 	                                  //N*N 게임보드판 이므로, 배열은 [0][0] ~ [N-1][N-1] 까지 있다. 
	 	if ((i == (N/2-1 )&& (j == (N/2-1))))
       a[i][j] = b; 
       
	    else if ((i == (N/2)) && (j == (N/2)))
	    a[i][j] = b; 
	    
    	else if ((i == (N/2-1)) && (j == (N/2)))
        a[i][j] = w; 
        
      	else if ((i == (N/2)) && (j == (N/2-1)))
        a[i][j] = w; 
    
	    else 
		a[i][j]= x;
	 }
	 

	 
	
}
	 
    
	}


// 메인 함수_ 필요한 함수 호출  ----    
void main() { 
    printf("********othello**********\n"); // 게임시작을 알리는 문장 출력  
    printf("-> black stone : @\n"); //검정색 돌과 하얀색 돌이 무엇인지 알려주는 문장 출력  
    printf("-> white stone : O\n");	 
	printf(" if you want to start, input 'start' and press enter!  -->   "); // start를 입력하라는 문장 출력 
  scanf("%c", &start); // start를 입력  
  
  
     if( start ==start){ //start를 입력하면 게임이 시작됨  
	 
	 init_othello(gameboard);   // 초기 오델로 함수 호출 
	 print_othello(gameboard); //출력 함수 - 초기 오델로 함수를 출력하도록 함  
     }
  
  	 // 흰색 알의 차례일 경우  // 
	   printf("&& O turn &&\n"); // 흰색알 player의 차례임을 알려주는 문장 출력 
  	   printf("the number of O: \n"); //흰색알의 배치 상황  
  	   printf("input coordinates: \n ");// 좌표를 입력하라는 문장 출력  
  	   scanf("%i\n", &wR); //좌표 입력_  흰색알의 ROW  
	   scanf("%i\n", &wC);  // 좌표 입력_  흰색알의 Column 
  	   
	
  	   i= wR; j=wC;
  	   gameboard[i][j]= 'O';
	   print_othello(gameboard); 
	 
  	// 검은 색 알의 차례일 경우 //
	   printf("&& @ turn &&\n"); // 검정알 player의 차례임을 알려주는 문장 출력 
  	   printf("the number of @: \n"); //검정알의 배치 상황  
  	   printf("input coordinates: \n ");// 좌표를 입력하라는 문장 출력  
  	   scanf("%i\n", &bR); //좌표 입력_  검정알의 ROW  
	   scanf("%i\n", &bC);  // 좌표 입력_  검정알의 Column 
  	
  	   i= bR; j= bC;
  	   gameboard[i][j]= '@';
	   print_othello(gameboard);
	   
  
  	 
}    

