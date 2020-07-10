#include <iostream>
#include "filereader.h"
#include "jsonvalidator.h"

int main() {
    std::string path_to_schema, path_to_json;
    std::cout << "Specify the path to the schema file" << std::endl;
    getline(std::cin, path_to_schema);
    std::cout << "Specify the path to the json file" << std::endl;
    getline(std::cin, path_to_json);
    try {
        JsonValidator jsonValidator(FileReader::parse(path_to_schema));
        if (jsonValidator(FileReader::parse(path_to_json))) {
            std::cout << "Json is valid\n";
        } else {
            std::cout << "Json is invalid\n";
        }
    }
    catch(std::runtime_error& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}