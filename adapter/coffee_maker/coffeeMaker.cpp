#include<iostream>

#include "adapter.hpp"

using namespace std;

/*
 * Client 
 *
 * */

class ElectricKettle{
	
	USASocketInterface* power;

	public:
		void plugIn(USASocketInterface* supply){		
			power = supply;
		}
		
		void boil(){
			if(power->voltage() > 110){
				cout << "Kettle is on fire !!" << endl;
				return;
			}		

			if(power->live() == 1 && power->neutral() == -1){
				cout << "Coffee Time !!" << endl;
				return;
			}
		}
		
};

int main(){
	
	Socket* socket = new Socket; // Create an instance of the Adaptee
	Adapter* adapter = new Adapter; // Create an instance of the Adapter
	ElectricKettle *kettle = new ElectricKettle; // Create an instance of the Client

	/* 
	 * Plugin
	 * */

	adapter->plugIn(socket);
	kettle->plugIn(adapter);

	/*Having Coffee*/
	kettle->boil();

	return 0;
}
