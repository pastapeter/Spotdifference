#include <iostream>
using namespace std;


class Chulsoo {
public:
	int Eat(int steakNum=20000, int WaterNum = 1000, int CoffeeNum = 5000); //����Ʈ �Ű����� �� ����
};

int Chulsoo::Eat(int steakNum, int WaterNum, int CoffeeNum) {
	cout << "ö����"<< steakNum <<"�� ¥�� ������ũ �Դ´�" << endl;
	cout << "ö����" << WaterNum << "�� ¥�� �� �Դ´�" << endl;
	cout << "ö����" << CoffeeNum << "�� ¥�� Ŀ�� �Դ´�" << endl;
	return steakNum;
}

int main(void) {
	Chulsoo chulsoo;
	chulsoo.Eat();
	chulsoo.Eat(30000);
	chulsoo.Eat(1500);
	chulsoo.Eat(20000, 1500);
	return 0;
}