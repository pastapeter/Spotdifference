#include <iostream>
using namespace std;

class Restaurant {
public:
	int Steak; // 스테이크 가격

};

class Chulsoo {
public:
	int Eat(int&); //참조자에 의한 
};

int Chulsoo::Eat(int& steakNum) {
	steakNum = 10000;
	cout << "철수는 먹는다" << endl;
	return steakNum;
}

int main(void) {
	Chulsoo chulsoo;
	Restaurant restaurant;

	restaurant.Steak = 20000;
	cout << "철수는" << chulsoo.Eat(restaurant.Steak) << "원 짜리 스테이크를 먹었다고 거짓말을 했다." << endl;
	cout << "레스토랑은 철수가" << restaurant.Steak << "원 짜리 스테이크를 먹었다고 했다." << endl;
	return 0;
}