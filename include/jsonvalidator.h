#ifndef SCHEMAVALIDATOR_JSONVALIDATOR_H
#define SCHEMAVALIDATOR_JSONVALIDATOR_H

#include <iostream>
#include "rapidjson/schema.h"
#include "rapidjson/document.h"

class JsonValidator {
public:
    static bool isValid(rapidjson::Document sd, rapidjson::Document  doc);
private:
};


#endif //SCHEMAVALIDATOR_JSONVALIDATOR_H
