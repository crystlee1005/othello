#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i, j;
  char b = '@';
 // 검정색 알
 char  w = 'O'; // 하얀색 알 
  

char init_othello(char a[N][N])   
{  
    
	 
	 for(i=0; i<N; i++){
     
	 for(j=0; j<N; j++)
	 
	a[i][j] = b;
   	a[(N-1)/2][(N-1)/2] = b;
	a[(N-1)/2+1][(N-1)/2+1] = b;
	a[(N-1)/2+1][(N-1)/2] = w;
	a[(N-1)/2][(N-1)/2+1] = w;
}
	 
    
	}
	


char print_othello(char a[N][N]){  // for문을 활용- N줄의 보드판을 출력하는 함수   
   
 
	char *ptr;
	ptr =& a[N][N];
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", *ptr);
    	
	 	printf("-------------------------\n");
	printf("|\n");	
	printf("-------------------------\n");
    
    }

	return 0;
}	

int main(void){
  // 필요한 변수들 정의 
  
  
     	print_othello(init_othello);   	
	 }
