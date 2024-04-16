#include <iostream>

enum LogLevel {
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3
};

class Logger {
    // implement your code
    public:
    //Logger();
    static void setLogLevel(LogLevel log);
    static void debug(std::string message , std::string TAG);
    static void info(std::string message, std::string TAG);
    static void warning(std::string message, std::string TAG);
    static void error(std::string message, std::string TAG);

    private:
    static int logLevel; //정적멤버함수 선언
};

