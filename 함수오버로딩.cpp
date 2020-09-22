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
	cout << "철수는 스테이크를 먹는다" << endl;
}

void Chulsoo::Eat(int steakNum) {
	cout << "철수는" <<steakNum <<"원짜리 스테이크를 먹는다" << endl;
}
void Chulsoo::Eat(double steakWeight) {
	cout << "철수는" << steakWeight << "g짜리 스테이크를 먹는다" << endl;
}
void Chulsoo::Eat(int steakNum1, int steakNum2) {
	cout << "철수는" << steakNum1 << " 어제 원짜리 스테이크를 먹는다" << endl;
	cout << "철수는" << steakNum2 << " 오늘 원짜리 스테이크를 먹는다" << endl;
}

int main(void) {
	Chulsoo chulsoo;
	chulsoo.Eat();
	chulsoo.Eat(30000);
	chulsoo.Eat(150.5);
	chulsoo.Eat(20000, 30000);
	return 0;
}