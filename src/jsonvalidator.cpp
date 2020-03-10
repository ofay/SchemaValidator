#include "jsonvalidator.h"

bool JsonValidator::isValid(rapidjson::Document sd, rapidjson::Document  doc) {
    rapidjson::SchemaDocument schema(sd);
    rapidjson::SchemaValidator validator(schema);
    if (doc.Accept(validator)) {
        return true;
    }
    else {
        rapidjson::StringBuffer sb;
        validator.GetInvalidSchemaPointer().StringifyUriFragment(sb);
        std::cout<< "Invalid schema: " << sb.GetString()<<std::endl;
        std::cout<< "Invalid keyword: " << validator.GetInvalidSchemaKeyword()<<std::endl;
        sb.Clear();
        validator.GetInvalidDocumentPointer().StringifyUriFragment(sb);
        std::cout<< "Invalid document: " << sb.GetString()<<std::endl;
        return false;
    }
}
