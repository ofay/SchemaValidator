#ifndef SCHEMAVALIDATOR_MESSAGE_H
#define SCHEMAVALIDATOR_MESSAGE_H

#include <iostream>
#include "rapidjson/schema.h"
#include "rapidjson/document.h"

class JsonValidator {
public:
    static bool isValid(rapidjson::Document sd, rapidjson::Document  doc);
private:
};


#endif //SCHEMAVALIDATOR_MESSAGE_H
