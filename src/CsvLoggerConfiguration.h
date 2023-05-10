//
// Created by Tim Mitsch on 09.05.23.
//

#ifndef CSV_LOGGER_CSVLOGGERCONFIGURATION_H
#define CSV_LOGGER_CSVLOGGERCONFIGURATION_H

typedef enum {
    CHAR=1,
    UCHAR=2,
    BOOL=3,
    SINT=4,
    INT8_T=5,
    USINT=6,
    UINT8_T=7,
    INT=8,
    INT16_T=9,
    UINT=10,
    UINT16_T=11,
    DINT=12,
    INT32_T=13,
    UDINT=14,
    UINT32_T=15,
    REAL=16,
    FLOAT=17,
    LREAL=18,
    DOUBLE=19
} VariableType;

class CsvLoggerVariable {
private:
    char* variable_name;            /**< name of variable (unique) */
    char* variable_header;          /**< header for the regarding variable */
    char* variable_description;     /**< description of variable (optional) */
    void* variable_value;           /**< pointer to memory where data is located */
    VariableType variableType;      /**< used variable type to ensure proper copy of source memory */

public:



};

class CsvLoggerCategory {
private:
    char* file_name_template;
    char* file_location;
    char* category_name;
    char* category_description;
    int max_size_kb;
    int logging_interval_ms;

};

class CsvLoggerConfiguration {
private:
    void defineVariable();

};


#endif //CSV_LOGGER_CSVLOGGERCONFIGURATION_H
