#ifndef COURSES_H
#define COURSES_H

/*courses class is for creating new courses for a semester and level and assigning lecturer to the
class*/
#include <iostream>
#include <string>

namespace course{

	class courses{
	public:
		courses();
		courses(std::string,std::string,std::string,int,int,int);
		~courses();
		void setCourseCode(std::string);
		void setCourseTitle(std::string);
		void setCourseLecturer(std::string);
		void setLevel(int);
		void setSemester(int);
		void setCourseScore(int);
		void setCourseGrade(std::string);
		// get the private values
		std::string getCourseCode();
		std::string getCourseTitle();
		std::string getCourseLecturer();
		std::string getCourseLocation();
		int getLevel();
		int getSemester();
		int getCourseScore();
		std::string getCourseGrade();

	private:
		std::string CourseCode;
		std::string CourseTitle;
		std::string CourseLecturer;
		// std::string CourseLocation;
		int Level;
		int CourseScore;
		std::string CourseGrade;
		int Semester;

	};//class courses

}

#endif //COURSES_h
