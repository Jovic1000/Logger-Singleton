#pragma once
#define LOG(x) Logger::GetInst()->Log(x)
#include <string>

class Logger
{
public:

	static void Init();
	void Log(std::string msg);
	static void Deinit();
	
	static Logger* GetInst();

private:

	Logger();
	Logger(const Logger&) = delete;

	void OutputToFile(std::string msg);
	void OutputToConsole(std::string msg);

	std::string m_fileName;
	static Logger* m_inst;

};

