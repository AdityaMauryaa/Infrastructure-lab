#include "logger/Logger.hpp"
#include<iostream>
void Logger::trace(std::string_view message){
    Logger::log(LogLevel::Trace,message);
}
void Logger::debug(std::string_view message){
    Logger::log(LogLevel::Debug,message);
}
void Logger::info(std::string_view message ){
    Logger::log(LogLevel::Info,message);
}
void Logger::warn(std::string_view message ){
Logger::log(LogLevel::Warn,message);
}
void Logger::error(std::string_view message){
Logger::log(LogLevel::Error,message);
}
void Logger::fatal(std::string_view message){
Logger::log(LogLevel::Fatal,message);
}

void Logger::log(LogLevel level, std::string_view message)
{
    const char* s=toString(level);

   std::cout << message << '\n';
}           