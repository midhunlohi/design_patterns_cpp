#include <iostream>

using namespace std;

// Implementor Class
class Gear{
	public:
		virtual void handleGear() = 0;
};
// Concrete Implementation Of Implementor Class

class Auto : public Gear{
	public:
		void handleGear(void){
			cout << "Auto Gear" << endl;
		}
};

class Manual : public Gear{
	public:
		void handleGear(void){
			cout << "Manual Gear" << endl;
		}
};

// Abstract Class
class Vehicle{
	public:
		virtual void addGear() = 0;
};

// Concrete Implementation of Abstract Class
class Car:public Vehicle{
	private:
		Gear *impl;
	public:
		Car(Gear *obj){
			impl = obj;
		}
		void addGear(){
			cout << "Car with " << endl;
		       	impl->handleGear();
		}

};

class Truck:public Vehicle{
	private:
		Gear *impl;
	public:
		Truck(Gear *obj){
			impl = obj;
		}
		void addGear(){
			cout  << "Truck with " << endl;
		        impl->handleGear();
		}
};

int main(){
	Gear* automatic = new Auto();
	
	Vehicle* carPtr = new Car(automatic);
	carPtr->addGear();

	Vehicle* truckPtr = new Truck(automatic);
	truckPtr->addGear();
}




