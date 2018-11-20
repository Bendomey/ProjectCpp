#ifndef COURSES_H
#define COURSES_H

/*courses class is for creating new courses for a semester and level and assigning lecturer to the
class*/

#include <string>

namespace course{

	class courses
	{
	public:
		courses(std::string,std::string,std::string,std::string,int,char,int);
		~courses();
		void setCourseCode(std::string);
		void setCourseTitle(std::string);
		void setCourseLecturer(std::string);
		void setCourseLocation(std::string);
		void setLevel(int);
		void setSemester(int);
		void setCourseGrade(char);
		// get the private values
		std::string getCourseCode();
		std::string getCourseTitle();
		std::string getCourseLecturer();
		std::string getCourseLocation();
		int getLevel();
		int getSemester();
		char getCourseGrade();
		
	private:
		std::string CourseCode;
		std::string CourseTitle;
		std::string CourseLecturer;
		std::string CourseLocation;
		int Level;
		char CourseGrade;
		int Semester;
		
	};//class courses

}
	
#endif //COURSES_h