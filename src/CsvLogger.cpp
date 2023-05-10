//
// Created by Tim Mitsch on 09.05.23.
//

#include "CsvLogger.h"

CsvLogger::CsvLogger() {}

CsvLogger::~CsvLogger() {
    this->availableVariableMap.clear();
    this->definedLoggingCategories.clear();

}
