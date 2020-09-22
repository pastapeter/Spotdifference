#include <bangtal.h>

using namespace bangtal;

int main() {

	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, 0);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, 0);

	// ������
	auto scene = Scene::create("��Ÿ���̽�", "images/background.png");
	auto santaX = 0, santaY = 400;
	auto santa = Object::create("images/santa.png", scene, santaX, santaY);
	
	auto playButton = Object::create("images/play.png", scene, 610, 30, 0);

	auto startButton = Object::create("images/start.png", scene, 590, 70);
	auto endButton = Object::create("images/end.png", scene, 590, 20);

	auto timer = Timer::create(10.f);

	endButton->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool {
		endGame();
		return true; });

	startButton->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool {
		startButton->hide();
		endButton->hide();
		playButton->show();
		timer->set(10.f);
		timer->start();
		santaX = 0;
		santa->locate(scene, santaX, santaY);
		return true; });

	playButton->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool {
		// ��Ÿ�� x������ 30��ŭ �̵�
		santaX = santaX + 30;
		santa->locate(scene, santaX, santaY);

		if (santaX > 1280) {
			showMessage("���� ��� ����~~~");
			timer->stop();
			startButton->setImage("images/restart.png");
			startButton->show();
			endButton->show();
			playButton->hide();
		}
		return true; });

	
	showTimer(timer);
	timer->setOnTimerCallback([&](TimerPtr)->bool {
		showMessage("�� ���� ��޽���!!!");
		startButton->setImage("images/restart.png");
		startButton->show();
		endButton->show();
		playButton->hide();
		return true;
	});
	


	// ������ �����Ѵ�.
	startGame(scene);
	return 0;
}