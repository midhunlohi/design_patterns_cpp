#include<iostream>

/*
 * The instance() function returns a pointer to a static variable and thus us declared static.
 * Only the class function Instance() can call the constructor. Public access to the constructor is denied.
 * The constructor, copy constructor and assignment operator are all private to ensure that the programmer
 * can only create a single instance of the class using only the Instance() function.
 * The lifetime of the singleton instantiation is for the duration of the application.
 *
 * */

class Logger{

	public:
		static Logger* Instance();
		bool openLogFile(std::string logFile);
		void writeToLogFile();
		bool closeLogFile();
	private:
		Logger() {}; // Constructor is private, so that it cannot be invoked
		Logger (Logger const&){}; // Copy constructor is private
		Logger& operator = (Logger const&){}; // Assignment operator is private
		static Logger* m_pInstance;
};
