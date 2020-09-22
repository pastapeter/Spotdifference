#include <iostream>
using namespace std;


class Chulsoo {
public:
	int Eat(int steakNum=20000, int WaterNum = 1000, int CoffeeNum = 5000); //디폴트 매개변수 값 지정
};

int Chulsoo::Eat(int steakNum, int WaterNum, int CoffeeNum) {
	cout << "철수는"<< steakNum <<"원 짜리 스테이크 먹는다" << endl;
	cout << "철수는" << WaterNum << "원 짜리 물 먹는다" << endl;
	cout << "철수는" << CoffeeNum << "원 짜리 커피 먹는다" << endl;
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