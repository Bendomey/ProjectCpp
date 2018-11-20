
#ifndef AUTH_H
#define AUTH_H 


namespace auth {


	class Auth
	{
	public:
		Auth();
		void signUp(std::string,std::string,int);
		void signIn(std::string,int);
		void setId(int);
		void setName(std::string);
		void setPin(std::string);
		~Auth();
	
	private: 
		std::string id, name;
		int pin;
		// int status; checking   
	};


}




#endif