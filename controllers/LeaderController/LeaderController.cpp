#include "LeaderController.hpp"

LeaderRobot::LeaderRobot() {};

LeaderRobot::~LeaderRobot() {}

void LeaderRobot::run() {
	while (step(TIME_STEP) != -1) {
		talk();
	}

}

void LeaderRobot::move(double speed) {

}

void LeaderRobot::rotate(double speed) {

}

void LeaderRobot::talk() {
	std::cout << "Leader robot talking\n";
}


int main(int argc, char **argv) {
	LeaderRobot controller;

	controller.run();
}