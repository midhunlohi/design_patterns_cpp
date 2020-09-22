#include "logger.hpp"
#include <stddef.h> // defines NULL

using namespace std;

// Global static pointer used to ensure a single instance of the class
Logger* Logger::m_pInstance = NULL;

/*
 * This function is caled to create an instance of the class.
 * Calling the constructor publically is not allowed. The constructor is
 * private and is only called by this Instance() function.*
 *
 * */

Logger* Logger::Instance(){
	if( !m_pInstance ){
		m_pInstance = new Logger;
	}
	return m_pInstance;
}

bool Logger::openLogFile( string _logFile){
	cout << "Opens " << _logFile  << endl;
	return true;
}

int main(){
	Logger::Instance()->openLogFile("logfile.txt");
	return 0;	
}
