#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(void){
  // �ʿ��� ������ ���� 
  int i, j;
  char b, w;
  b = '@'; // ������ ��
  w = 'O'; // �Ͼ�� �� 
  
  for(i=0; i<N; i++)
     for(j=0; j<N; j++) {
     	print_othello[i][j] = b;    	
	 }

print_othello(�Լ�);  // for���� Ȱ��- N���� �������� ����ϴ� �Լ�   
   
printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", �Լ� [i][j]);
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }

	return 0;
}
