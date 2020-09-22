//포인터공간의 뺄셈은 주소형 변수(p)의 사이즈가 나옴
//더하기안댐
#include <stdio.h>

int main() {
	int a = 1, b = 2, c = 3;
	int* pa = &a, * pb = &b, * pc = &c;
	int** ppa = &pa, ** ppb = &pb, ** ppc = &pc;
	//포인터에 정수를 더하거나 빼면 - 포인터
	//정수형을 저장하는 포인터는 4byte 짜리 -> 저장하는 형식에 맞게 주소의 싸이즈 반환
	// 주소를 저장하는 포인터는 8byte 짜리
	printf("%p %p %p", ppa, ppb, ppc);
	printf("%d %d %d", ppa - ppb, ppa - ppc, ppb - ppc);
	printf("%d %d %d")

}