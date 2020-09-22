#include<iostream>
using namespace std;

/*
 * Legacy Class:
 * Add two values and print to console.
 * */
class SimpleAdd{

	private:
		int x;
		int y;
	public:
		SimpleAdd(int a, int b){
			x = a;
			y = b;
		}
		void oldAdd(void ){
			cout << "Added Value : " <<  x + y <<  endl;
		}
};

/*
 * Target Interface
 * New requirement for adding square values.
 *
 * */
class SquareAdd{
	public:
		virtual void add() = 0;
};

/*
 * Adapter
 * Inherit Legacy class and New class and adapt it to the required interface.
 * */
class Adapter : public SimpleAdd, public SquareAdd{
	public:
		Adapter(int x, int y): SimpleAdd(x*x, y*y){ }	

		void add(){
			oldAdd();	
		}
};

int main(){
	SquareAdd *ptr = new Adapter(10, 20);
	ptr->add();
}
