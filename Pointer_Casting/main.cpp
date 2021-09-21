#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void HAL_UART_Transmit(int *pData)
{
	cout<<(char*)pData;  //Output 5
}
int main(int argc, char** argv) {
	//char name= 'A';
	//HAL_UART_Transmit((int*)name);
	int Count = 5;
	char buffer[10];
	char CRLF[3] = {0x0A,0x0D,0x0};
	itoa(Count,buffer,10);
	
	//cout<<buffer<<endl;
	//cout<<Count<<endl;
	
	strcat(buffer,CRLF);
	//cout<<buffer<<endl;
	HAL_UART_Transmit((int *)buffer); 
	return 0;
}
