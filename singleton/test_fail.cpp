#include "singleton.hpp"
#include<iostream>

using namespace std;

int main(){
//	new Singleton(); // Compilation failure - only one object out of Singleton class can be present
	Singleton *obj = new Singleton();
}

