//�����Ͱ����� ������ �ּ��� ����(p)�� ����� ����
//���ϱ�ȴ�
#include <stdio.h>

int main() {
	int a = 1, b = 2, c = 3;
	int* pa = &a, * pb = &b, * pc = &c;
	int** ppa = &pa, ** ppb = &pb, ** ppc = &pc;
	//�����Ϳ� ������ ���ϰų� ���� - ������
	//�������� �����ϴ� �����ʹ� 4byte ¥�� -> �����ϴ� ���Ŀ� �°� �ּ��� ������ ��ȯ
	// �ּҸ� �����ϴ� �����ʹ� 8byte ¥��
	printf("%p %p %p", ppa, ppb, ppc);
	printf("%d %d %d", ppa - ppb, ppa - ppc, ppb - ppc);
	printf("%d %d %d")

}