// File:          BaseRobot.hpp
// Date:          XX/XX/XXXX
// Description:   Header file of BaseRobot to be inherited by the Leader and Scout robots classes.
// Author:        XXX XXX
// zID:           z1234567
// Modifications:

#pragma once

// add additional includes as needed
#pragma once

#include "../BaseRobot/BaseRobot.hpp"

#include <webots/Robot.hpp>


// constexpr int TIME_STEP{ 64 };

class LeaderRobot : public BaseRobot {
public:
	LeaderRobot();
	virtual ~LeaderRobot();

	void run() override;
	void move(double speed) override;
	void rotate(double speed) override;
	void talk() override;

	void keyboardControl();
	void updateCurrentPosition();
	void setTargetPosition(double x, double y);
	bool moveToTarget(double stopDistance);

	void scanLidarData();
	void fileOutput(const std::string& output);


protected:
	std::string ID{};
	double currentPositionX{};
	double currentPositionY{};
	double currentYaw{};
	double targetPositionX{};
	double targetPositionY{};

	// add additional members as needed

private:
	std::unique_ptr<webots::Receiver> receiver{};
	std::unique_ptr<webots::Emitter> emitter{};

	// add additional members as needed
};
