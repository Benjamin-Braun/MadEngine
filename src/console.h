#pragma once

#include "madengine.h"

namespace Console {
	void Print(string str);
	void Log(string log, string type = "LOG");
	void Warn(string msg, string type = "Wall");
	void Err(string msg, bool abort = true);
};
