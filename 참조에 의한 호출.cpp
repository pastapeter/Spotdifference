#include <iostream>
using namespace std;

class Restaurant {
public:
	int Steak; // ������ũ ����

};

class Chulsoo {
public:
	int Eat(int&); //�����ڿ� ���� 
};

int Chulsoo::Eat(int& steakNum) {
	steakNum = 10000;
	cout << "ö���� �Դ´�" << endl;
	return steakNum;
}

int main(void) {
	Chulsoo chulsoo;
	Restaurant restaurant;

	restaurant.Steak = 20000;
	cout << "ö����" << chulsoo.Eat(restaurant.Steak) << "�� ¥�� ������ũ�� �Ծ��ٰ� �������� �ߴ�." << endl;
	cout << "��������� ö����" << restaurant.Steak << "�� ¥�� ������ũ�� �Ծ��ٰ� �ߴ�." << endl;
	return 0;
}