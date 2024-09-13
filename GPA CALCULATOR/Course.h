#pragma once
#include <string>
#include <iostream>
using namespace std;
class Course
{
private:
	string courseName;
	int mark;
public:
	Course();
	Course(string courseName, int mark);
	//setter 

	void setCourseName(string coursename);
	void setMark(int Mark);

	//getter

	string getCourseName();
	int getMark();
};

