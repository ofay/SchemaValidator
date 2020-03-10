#include <iostream>
#include "filereader.h"
#include "message.h"

int main() {
    std::string path_to_schema, path_to_json;
    std::cout << "Specify the path to the schema file" << std::endl;
    getline(std::cin, path_to_schema);
    std::cout << "Specify the path to the json file" << std::endl;
    getline(std::cin, path_to_json);
    if (JsonValidator::isValid(FileReader::parse(path_to_schema), FileReader::parse(path_to_json))) {
        std::cout << "Json is valid\n";
    }
    else {
        std::cout << "Json is invalid\n";
    }
    return 0;
}