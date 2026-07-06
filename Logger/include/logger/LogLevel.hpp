#pragma once
enum class LogLevel{
Trace,
Debug,
Info,
Warn,
Error,
Fatal,
};
const char* toString(LogLevel level);