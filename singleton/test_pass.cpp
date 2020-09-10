#include "singleton.hpp"
#include<iostream>

using namespace std;

int main(){
	
	Singleton* p1 = Singleton::getInstance();
	Singleton* p2 = Singleton::getInstance();
	Singleton *p3 = p1;
	cout << p1 << endl;
	cout << p2 << endl;
}

