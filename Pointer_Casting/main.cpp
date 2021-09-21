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
	char CRLF[3] = {0x0A,0x0D,0x0}; //control feed
	itoa(Count,buffer,10);  //แปลง int เป็น string
	
	//cout<<buffer<<endl;
	//cout<<Count<<endl;
	
	strcat(buffer,CRLF);   //เอา string ต่อ string
	//cout<<buffer<<endl;
	cout<<&buffer<<endl;   //0x6ffe10 พบว่ามีค่าเท่ากัน
	cout<<(int*)buffer<<endl;// 0x6ffe10 พบว่ามีค่าเท่ากัน จึงสรุปได้ว่า (int *)buffer ทำหน้าที่ส่ง address ของ buffer ไปตรงๆเลย
	HAL_UART_Transmit((int *)buffer);   // (int *) เป็นการ cast buffer ให้เป็น pointer ชนิด int ก่อนไม่งั้นมันจะ error ตามรูปที่ใส่ไป
	return 0;
}
