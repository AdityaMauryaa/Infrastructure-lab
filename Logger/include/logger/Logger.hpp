#pragma once
#include <string_view>
#include "LogLevel.hpp"
class Logger {
public:
    void trace(std::string_view message);
    void debug(std::string_view message);
    void info(std::string_view message);
    void warn(std::string_view message);
    void error(std::string_view message);
    void fatal(std::string_view message);
private:
    void log( LogLevel level, std::string_view message);
};