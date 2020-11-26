#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];  //gameboard ����  
int i, j;  // �ʿ��� ������ ����  
char b = '@';  // ������ ��
char w = 'O';  // �Ͼ�� ��	
char x = ' '; // �� ĭ
char start; // ���� ��ư 	   
int wR, wC, bR, bC; // ��ǥ�Է��� ���� ���� 

// ��� �Լ� 
	 
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

	    
// ������  �ʱ�ȭ �ϴ� �Լ�__ ���߾� 4ĭ�� ��� ������ ���� 2���� �밢�� ������� ��ġ    
char init_othello(char a[N][N])   
{  
    
	 
	 for(i=0; i<N; i++){
     
	 for(j=0; j<N; j++) {
	 	                                  //N*N ���Ӻ����� �̹Ƿ�, �迭�� [0][0] ~ [N-1][N-1] ���� �ִ�. 
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


// ���� �Լ�_ �ʿ��� �Լ� ȣ��  ----    
void main() { 
    printf("********othello**********\n"); // ���ӽ����� �˸��� ���� ���  
    printf("-> black stone : @\n"); //������ ���� �Ͼ�� ���� �������� �˷��ִ� ���� ���  
    printf("-> white stone : O\n");	 
	printf(" if you want to start, input 'start' and press enter!  -->   "); // start�� �Է��϶�� ���� ��� 
  scanf("%c", &start); // start�� �Է�  
  
  
     if( start ==start){ //start�� �Է��ϸ� ������ ���۵�  
	 
	 init_othello(gameboard);   // �ʱ� ������ �Լ� ȣ�� 
	 print_othello(gameboard); //��� �Լ� - �ʱ� ������ �Լ��� ����ϵ��� ��  
     }
  
  	 // ��� ���� ������ ���  // 
	   printf("&& O turn &&\n"); // ����� player�� �������� �˷��ִ� ���� ��� 
  	   printf("the number of O: \n"); //������� ��ġ ��Ȳ  
  	   printf("input coordinates: \n ");// ��ǥ�� �Է��϶�� ���� ���  
  	   scanf("%i\n", &wR); //��ǥ �Է�_  ������� ROW  
	   scanf("%i\n", &wC);  // ��ǥ �Է�_  ������� Column 
  	   
	
  	   i= wR; j=wC;
  	   gameboard[i][j]= 'O';
	   print_othello(gameboard); 
	 
  	// ���� �� ���� ������ ��� //
	   printf("&& @ turn &&\n"); // ������ player�� �������� �˷��ִ� ���� ��� 
  	   printf("the number of @: \n"); //�������� ��ġ ��Ȳ  
  	   printf("input coordinates: \n ");// ��ǥ�� �Է��϶�� ���� ���  
  	   scanf("%i\n", &bR); //��ǥ �Է�_  �������� ROW  
	   scanf("%i\n", &bC);  // ��ǥ �Է�_  �������� Column 
  	
  	   i= bR; j= bC;
  	   gameboard[i][j]= '@';
	   print_othello(gameboard);
	   
  
  	 
}    

