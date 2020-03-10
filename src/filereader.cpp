#include "filereader.h"

rapidjson::Document FileReader::parse(const std::string& path) {
    std::ifstream file(path);
    if(!file.is_open()) std::cout << "Could not open file: " << path << std::endl;
    rapidjson::IStreamWrapper is(file);
    rapidjson::Document doc;
    if(doc.ParseStream(is).HasParseError()){
        std::cout << "Error parse: " << doc.GetParseError() << std::endl;
    }
    else return doc;
}