#include<bangtal>
using namespace bangtal;

struct loc {
	int x;
	int y;
}loc;

int main() {

	auto scene1 = Scene::create("3X3ÆÛÁñ", "Images/½ÃÀÛÈ­¸é.png");
	auto scene2 = Scene::create("3X3ÆÛÁñ", "Images/°ÔÀÓÈ­¸é.png");
	auto timer = Timer::create(100.f);
	showTimer(timer);

	auto startbutton = Object::create("Images/start.png", scene1, 1030, 20);
	startbutton->setScale(1.4f);
	startbutton->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool {
		scene2->enter();
		timer->start();
		return true;
		});
	


	auto piece1 = Object::create("Images/2.png", scene2, 372, 425);
	auto piece2 = Object::create("Images/1.png", scene2, 542, 425);
	auto piece3 = Object::create("Images/ºóÄ­.png", scene2, 713, 425);
	auto piece4 = Object::create("Images/3.png", scene2, 372, 255);
	auto piece5 = Object::create("Images/8.png", scene2, 542, 255);
	auto piece6 = Object::create("Images/7.png", scene2, 713, 255);
	auto piece7 = Object::create("Images/4.png", scene2, 372, 84);
	auto piece8 = Object::create("Images/5.png", scene2, 542, 84);
	auto piece9 = Object::create("Images/6.png", scene2, 713, 84);

	timer->setOnTimerCallback([&](TimerPtr)->bool {
		showMessage("½ÇÆÐ");
		return true;

		});

	startGame(scene1);
};