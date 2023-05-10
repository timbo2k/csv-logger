//
// Created by Tim Mitsch on 09.05.23.
//

#ifndef CSV_LOGGER_CSVLOGGER_H
#define CSV_LOGGER_CSVLOGGER_H


#include <map>
#include <list>
#include "CsvLoggerConfiguration.h"

class CsvLogger {
private:
    std::map<std::string, CsvLoggerVariable> availableVariableMap;
    std::list<CsvLoggerCategory> definedLoggingCategories;
public:
    CsvLogger();

    virtual ~CsvLogger();

};


#endif //CSV_LOGGER_CSVLOGGER_H
