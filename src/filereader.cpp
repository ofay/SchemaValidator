#include "filereader.h"

rapidjson::Document FileReader::parse(const std::string& path) {
    std::ifstream file(path);
    if(!file.is_open()) {
        throw std::runtime_error(std::string("Could not open file: ").append(path));
    }
    rapidjson::IStreamWrapper is(file);
    rapidjson::Document doc;
    if(doc.ParseStream(is).HasParseError()){
        throw std::runtime_error(std::string("Error parse: ").append(std::to_string(doc.GetParseError())));
    }
    else return doc;
}