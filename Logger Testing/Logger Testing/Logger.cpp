#include "Logger.h"
#include <iostream>
#include <fstream>

Logger* Logger::m_inst = nullptr;

void Logger::Log(std::string msg)
{
	OutputToFile(msg);
	OutputToConsole(msg);
}

void Logger::Deinit()
{
	if (m_inst)
	{
		m_inst = nullptr;
		delete m_inst;
	}
}

Logger* Logger::GetInst()
{
	return m_inst;
}

Logger::Logger() : m_fileName("Log.txt")
{
}

void Logger::OutputToFile(std::string msg)
{
	std::ofstream logFile;


	logFile.open(m_fileName);

	logFile << msg;

	logFile.close();

}

void Logger::OutputToConsole(std::string msg)
{
	std::cout << msg << std::endl;
}

void Logger::Init()
{
	m_inst = new Logger();
}