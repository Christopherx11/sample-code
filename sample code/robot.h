#pragma once
#include <string>

using namespace std;

class Robot
{
public:
	//constructor
	//runs once automatically when you create an object
	//runs once per object but many times per class
	Robot();
	string name;
	void setNumberOfArms(int numberOfArms);
	int getNumberOfArms();
	void talk(string whatToSay);


	//deconstructor, this frees up memory
	~Robot();
    private://you cant change things in main when private
		int arms;
		int height;
		
};

