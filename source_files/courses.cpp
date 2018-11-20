#include <iostream>
#include <string>
#include "libraries\courses.h"

namespace course{

	// construtor with arguments
	courses::courses(std::string code, std::string title, std::string lecturerName, std::string loc, int level, char grade, int sem){
		this->setCourseCode(code);
		this->setCourseTitle(title);
		this->setCourseLecturer(lecturerName);
		this->setCourseLocation(loc);
		this->setLevel(level);
		this->setCourseGrade(grade);
		this->setSemester(sem);
	}

	// destructor
	courses::~courses(){
		// std::cout << "\nObject Destroyed";
	}

	// set values
	void courses::setCourseCode(std::string code) {
		this->CourseCode = code;
	}

	void courses::setCourseTitle(std::string title) {
		this->CourseTitle = title;
	}

	void courses::setCourseLecturer(std::string lecturerName) {
		this->CourseLecturer = lecturerName;
	}

	void courses::setCourseLocation(std::string loc) {
		this->CourseLocation = loc;
	}

	void courses::setLevel (int level) {
		this->Level = level;
	}

	void courses::setCourseGrade(char grade) {
		this->CourseCode = grade;
	}

	void courses::setSemester(int sem) {
		this->Semester = sem;
	}

	// get values

	std::string courses::getCourseCode() {
		return this->CourseCode;
	}

	std::string courses::getCourseTitle() {
		return this->CourseTitle;
	}

	std::string courses::getCourseLecturer() {
		return this->CourseLecturer;
	}

	std::string courses::getCourseLocation() {
		return this->CourseLocation;
	}

	int courses::getLevel() {
		return this->Level;
	}

	int courses::getSemester() {
		return this->Semester;
	}

	char courses::getCourseGrade() {
		return this->CourseGrade;
	}

}//course


	
