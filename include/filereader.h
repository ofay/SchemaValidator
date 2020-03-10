#ifndef SCHEMAVALIDATOR_FILEREADER_H
#define SCHEMAVALIDATOR_FILEREADER_H

#include <iostream>
#include <fstream>
#include "rapidjson/document.h"
#include "rapidjson/istreamwrapper.h"

class FileReader {
public:
    static rapidjson::Document parse(const std::string& path);
};


#endif //SCHEMAVALIDATOR_FILEREADER_H
