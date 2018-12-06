#include <iostream>
#include <string>
#include "robot.h"

using namespace std;
void main()
{

	//create a robot
	//create an object
	//called an instance of a robot class
	Robot Robot1;
	Robot1.name = "C3PO";
	Robot1.setNumberOfArms(2);
	Robot Robot2;
	Robot2.name = "R2D2";
	Robot2.setNumberOfArms(3);
	cout << "I have created a robot whose name is " << Robot1.name << "this robot has " << Robot1.getNumberOfArms() << "arms" << endl;
	cout << "I have created a robot whose name is " << Robot2.name << "this robot has " << Robot1.getNumberOfArms() << "arms" << endl;
	system("pause");
}