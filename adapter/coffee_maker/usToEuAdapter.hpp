
typedef int cable;
/*
 *Adaptee ( source ) interface
 * 
 * */

class EuropeanSocketInterface{

	public:
		virtual int voltage() = 0;
		virtual cable live() = 0;
		virtual cable neutral() = 0;
		virtual cable earth() = 0;

};

/*
 *
 * Adaptee
 *
 * */

class Socket : public EuropeanSocketInterface{

	public:
		int voltage() {
			return 230;
		}
		cable live(){
			return 1;
		}
		cable neutral(){
			return -1;
		}
		cable earth(){
			return 0;
		}

};

/*
 * Target Interface
 *
 * */

class USASocketInterface{

	public:
		virtual int voltage() = 0;
		virtual cable live() = 0;
		virtual cable neutral() = 0;

};


/*
 * The Adapter
 *
 * */

class Adapter : public USASocketInterface{

	EuropeanSocketInterface* socket;
	public:
		void plugIn( EuropeanSocketInterface* outlet ){
			socket = outlet;
		}
		int voltage() {
			return 110;
		}
		cable live(){
			return socket->live();
		}
		cable neutral(){
			return socket->neutral();
		}
};


