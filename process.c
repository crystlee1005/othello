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

//------ �Ʒ� ���� �Ű� x , Ȥ�� ���� ���ܵҤ�  
  //gameboard[N/2][N/2] = b;
   //gameboard[N/2][N/2 + 1] = w;
   //gameboard[N/2 + 1][N/2] = w;
   //gameboard[N/2 + 1][N/2 + 1] = b;	 
char print_othello (char a[N][N]){
     a[N][N];
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

	    
// ���� �ʱ�ȭ_ ���߾� 4ĭ�� ��� ������ ���� 2���� �밢�� ������� ��ġ    
char init_othello(char gameboard[][N])  // ---- ROW N ������ ����!!!!!!  
{  
    	 
	 for(i=0; i<N; i++)
     
	 for(j=0; j<N; j++) 
     	     		   
    if ((i == N/2 && j == N/2) || ( i == N/2 +1 && j == N/2 +1))
      gameboard[i][j] = b; 
    else if ((i==N/2 && j ==N/2 + 1) ||(i == N/2 + 1 && j == N/2))
      gameboard[i][j] = w;

    else gameboard[i][j]= x;


}

// ���� �Լ�_ �ʿ��� �Լ� ȣ��  ----    
void main() { 
    printf("********othello**********\n"); // ���ӽ����� �˸��� ���� ���  
    printf("-> black stone : @\n"); //������ ���� �Ͼ�� ���� �������� �˷��ִ� ���� ���  
    printf("-> white stone : O\n");	 
	 
	 init_othello;   // �ʱ� ������ �Լ� ȣ�� 
	 print_othello(init_othello);  // ����Լ� ȣ��
	 
}    



