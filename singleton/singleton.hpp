#include <iostream>

class Singleton{
	private:
		/* Private constructor to prevent instancing the objects */
		Singleton();
		
		/* Remove copy constructor */
		Singleton(Singleton const&) = delete;

		/* Remove assignment operator*/
		Singleton& operator = (Singleton const &) = delete;
	public:
		/* Static access method*/
		static Singleton *getInstance();

};

Singleton *Singleton::getInstance()
{
	static Singleton instance;

	return &instance;
}

Singleton::Singleton()
{
}


