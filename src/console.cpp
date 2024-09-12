#include "console.h"

namespace Console {
	void Print(string str){
		cout << str << endl;
	}

	void Log(string log, string type){
		cout << "[" << Time::GetTime() << "][" << type << "] " << log << endl;
	}

	void Warn(string msg, string type){
		cout << "[" << Time::GetTime() << "][WARNING] " << msg << " (" << type << ")" << endl;
	}

	void Err(string msg, bool abort){
		cout << "[" << Time::GetTime() << "][ERROR] " << msg << endl;
		if(abort) exit(1);
	}
};
