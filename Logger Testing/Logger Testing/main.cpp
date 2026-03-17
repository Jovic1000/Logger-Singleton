#include "Logger.h"


int main()
{
	Logger::Init();
	LOG("hello");
	Logger::Deinit();

	return 0;
}