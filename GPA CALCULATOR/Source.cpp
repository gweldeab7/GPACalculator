#include <iostream>
#include "Course.h"
#include <vector>
using namespace std;


int main() {
	int numberOfCourse;
	vector<Course>courses;
	cout << "How many courses are taking" << endl;
	cin >> numberOfCourse;
	string coursename;
	int Mark;
	for (int i =0; i < numberOfCourse; i++) {
		cout << "Enter course number " << i << endl;
		cin >> coursename;
		courses[i].setCourseName(coursename);
		cout << "Enter course Mark" << endl;
		cin >> Mark;
		courses[i].setMark(Mark);
	}

	return 0;
}