#ifndef SCHEMAVALIDATOR_JSONVALIDATOR_H
#define SCHEMAVALIDATOR_JSONVALIDATOR_H

#include <iostream>
#include "rapidjson/schema.h"
#include "rapidjson/document.h"
#include <utility>

class JsonValidator {
    rapidjson::Document _sd;
    rapidjson::SchemaDocument* schema;
    rapidjson::SchemaValidator* validator;
public:
    explicit JsonValidator(rapidjson::Document sd);
    bool operator()(const rapidjson::Document& doc);
    ~JsonValidator();
private:
};


#endif //SCHEMAVALIDATOR_JSONVALIDATOR_H
