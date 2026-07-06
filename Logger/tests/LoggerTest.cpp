#include "../src/Logger.cpp"

int main()
{
    Logger logger;
    logger.info("Testing info");
    logger.error("Testing error");
    logger.debug("Testing debug");
    logger.warn("Testing warn");
    logger.fatal("Testing fatal");
    logger.trace("Testing trace");
}