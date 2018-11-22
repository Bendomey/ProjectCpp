
#ifndef AUTH_H
#define AUTH_H 


namespace auth {


	class Auth
	{
	public:
		Auth();
		void signIn(std::string,int);
		~Auth();
	
	private: 
		std::string id, name;
		int pin;
		// int status; checking   
	};


}




#endif