#include "jsonvalidator.h"

JsonValidator::JsonValidator(rapidjson::Document sd) :
        _sd(std::move(sd)) {
    schema = new rapidjson::SchemaDocument(_sd);
    validator = new rapidjson::SchemaValidator(*schema);
}

bool JsonValidator::operator()(const rapidjson::Document& doc) {
    if (doc.Accept(*validator)) {
        return true;
    }
    else {
        rapidjson::StringBuffer sb;
        validator->GetInvalidSchemaPointer().StringifyUriFragment(sb);
        std::cout<< "Invalid schema: " << sb.GetString()<<std::endl;
        std::cout<< "Invalid keyword: " << validator->GetInvalidSchemaKeyword()<<std::endl;
        sb.Clear();
        validator->GetInvalidDocumentPointer().StringifyUriFragment(sb);
        std::cout<< "Invalid document: " << sb.GetString()<<std::endl;
        return false;
    }
}

JsonValidator::~JsonValidator() {
    delete schema;
    delete validator;
}