#include <iostream>
using namespace std;


class Chulsoo {
public:
	void Eat(void);
	void Eat(int steakNum);
	void Eat(double steakWeight);
	void Eat(int steakNum1, int steakNum2);
	
};

void Chulsoo::Eat() {
	cout << "ö���� ������ũ�� �Դ´�" << endl;
}

void Chulsoo::Eat(int steakNum) {
	cout << "ö����" <<steakNum <<"��¥�� ������ũ�� �Դ´�" << endl;
}
void Chulsoo::Eat(double steakWeight) {
	cout << "ö����" << steakWeight << "g¥�� ������ũ�� �Դ´�" << endl;
}
void Chulsoo::Eat(int steakNum1, int steakNum2) {
	cout << "ö����" << steakNum1 << " ���� ��¥�� ������ũ�� �Դ´�" << endl;
	cout << "ö����" << steakNum2 << " ���� ��¥�� ������ũ�� �Դ´�" << endl;
}

int main(void) {
	Chulsoo chulsoo;
	chulsoo.Eat();
	chulsoo.Eat(30000);
	chulsoo.Eat(150.5);
	chulsoo.Eat(20000, 30000);
	return 0;
}