#include "Course.h"

Course::Course() {
	this->courseName = "";
	this->mark = 0;
}
Course::Course(string courseName, int mark) {
	this->courseName = courseName;
	if (mark >= 0 && mark<100) {
		this->mark = mark;
	}
	else
	{
		cout << "Mark can not be below 0 or above 100" << endl;
		cout << "Assigning mark zero for "<<this->courseName << endl;
		this->mark = 0;
	}
}
//setter 

void Course::setCourseName(string coursename) {

}
void Course::setMark(int Mark) {

}

//getter

string Course::getCourseName() {

	return this->courseName;
}
int Course::getMark() {

	return this->mark;
}