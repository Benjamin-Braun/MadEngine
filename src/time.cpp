#include "time.h"

namespace Time {
    string GetTime(){
        std::time_t t = std::time(0);
    	std::tm* now = std::localtime(&t);
        string h = to_string(now->tm_hour);
        string m = to_string(now->tm_min);
        string s = to_string(now->tm_sec);
        return h + ":" + m + ":" + s;
    }

    string GetDate(){
        std::time_t t = std::time(0);
    	std::tm* now = std::localtime(&t);
    }

    string GetTimeAndDate(){
        std::time_t t = std::time(0);
    	std::tm* now = std::localtime(&t);
    }
}