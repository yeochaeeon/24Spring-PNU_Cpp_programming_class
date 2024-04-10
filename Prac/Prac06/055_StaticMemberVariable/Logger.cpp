#include "Logger.h"
//Logger::Logger(){};
int Logger::logLevel = 1;
//'static' can only be specified inside the class definition!!!!!!!!!

void Logger::setLogLevel(LogLevel log){
    logLevel = log;
    //std::cout << "##" << log <<std::endl;
}

void Logger::debug(std::string message, std::string TAG) {
    if (logLevel <=0) {
        std::cout << "[" << "DEBUG" << "]" << "[" << TAG << "]" << " " << message << std::endl;
    }
}

void Logger::info(std::string message, std::string TAG) {
    if (logLevel <= 1) {
        std::cout << "[" << "INFO" << "]" << "[" << TAG << "]" << " " << message << std::endl;
    }
}

void Logger::warning(std::string message, std::string TAG) {
    if (logLevel <= 2){
        std::cout << "[" << "WARNING" << "]" << "[" << TAG << "]" << " " << message << std::endl;
    }
}

void Logger::error(std::string message, std::string TAG) {
    if (logLevel <= 3) {
        std::cout << "[" << "ERROR" << "]" << "[" << TAG << "]" << " " << message << std::endl;
    }
}

