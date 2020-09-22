#include <bangtal.h>

using namespace bangtal;

class Rect{
public:
	int centerX, centerY, radius;

	Rect(int cx, int cy, int r) :centerX(cx), centerY(cy), radius(r) {};

	bool checkIn(int x, int y) {
		return (x > centerX - radius) && (x < centerX + radius) && (y > centerY - radius) && (y < centerY + radius);
	}
};

int main() {
	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);

	auto scene = Scene::create("숨은그림찾기", "images/problem.png");
	auto problem = Object::create("images/problem.png", scene);
	
	// 568 594 / 1186 594
	Rect left_rect1(568, 594, 54);
	Rect right_rect1(1186, 594, 54);

	const int num_of_differences = 7;
	Rect left_rects[num_of_differences] = {
		{568, 594, 54},
		{99, 551, 17},
		{383, 482, 16},
		{401, 158, 27},
		{61, 255, 36},
		{592, 421, 35},
		{320, 117, 13}
	};
	Rect right_rects[num_of_differences] = {
		{1186, 594, 54},
		{717, 551, 17},
		{1001, 482, 16},
		{1019, 158, 27},
		{679, 255, 36},
		{1210, 421, 35},
		{938, 117, 13}
	};

	const int check_size = 25;
	ObjectPtr left_checks[num_of_differences];
	ObjectPtr right_checks[num_of_differences];

	for (int i = 0; i < num_of_differences; ++i) {
		left_checks[i] = Object::create("images/check.png", scene, left_rects[i].centerX - check_size, left_rects[i].centerY - check_size, false);
		right_checks[i] = Object::create("images/check.png", scene, right_rects[i].centerX - check_size, right_rects[i].centerY - check_size, false);
	}
	
	int count = 0;
	problem->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool {
		// 중심이 (568, 594), 반지름이 54인 사각형에 (x,y)가 포함되면 체크를 보인다
		bool checked = false;
		
		for (int i = 0; i < num_of_differences; i++) {
			if (left_rects[i].checkIn(x, y) || right_rects[i].checkIn(x, y)) {
				left_checks[i]->show();
				right_checks[i]->show();
				checked = true;
				count++;
			}
			}
		if(checked == false) {		//그렇지않으면 게임을 종료한다.
		endGame();
		}
		if (count == num_of_differences) {
			showMessage("성공, 다 찾았다!!!!");
		}
		
	
		return true;
	});
	startGame(scene);

	return 0;
}
