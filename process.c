#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];  //gameboard ����  
int i, j;  // �ʿ��� ������ ����  
char b = '@';  // ������ ��
char w = 'O';  // �Ͼ�� ��	
char x = ' ';	   

// ��� �Լ� 
	 
void print_othello (char a[N][N]){
	 
	 char *p;
	 	     
     p = &a[0][0]; // ������ p�� �迭 a�� [0][0]��° ��ҷ�  �ʱ�ȭ  
     
     
 printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", *p );
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }
}

	    
// ������  �ʱ�ȭ �ϴ� �Լ�__ ���߾� 4ĭ�� ��� ������ ���� 2���� �밢�� ������� ��ġ    
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


// ���� �Լ�_ �ʿ��� �Լ� ȣ��  ----    
void main() { 
    printf("********othello**********\n"); // ���ӽ����� �˸��� ���� ���  
    printf("-> black stone : @\n"); //������ ���� �Ͼ�� ���� �������� �˷��ִ� ���� ���  
    printf("-> white stone : O\n");	 
	
	 init_othello(gameboard);   // �ʱ� ������ �Լ� ȣ�� 
	 print_othello(gameboard); //��� �Լ� - �ʱ� ������ �Լ��� ����ϵ��� ��  
	 
}    



