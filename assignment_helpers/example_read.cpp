#include <iostream>
#include <random>
#include <vector>
#include <fstream>
#include <string>

std::vector<std::string> read_file(std::string path){
    std::ifstream myfile;
    std::vector<std::string> contents;
    myfile.open(path);
    if (! myfile.is_open()){
        throw path;
    }
    while(myfile.good()){
        std::string line;
        std::getline(myfile, line);
        contents.push_back(line);
    }
    return contents;
}

std::vector<int> convert_to_int(std::vector<std::string> contents){

    std::vector<int> result;

    for (std::string item: contents){
        result.push_back(std::stoi(item));
    }
    return result;
}

int main ()
{
    std::vector<std::string> cities = read_file("./assignment_data/cities.txt");
    std::vector<std::string> distances_str = read_file("./assignment_data/distances.txt");
    std::vector<int> distances = convert_to_int(distances_str);
    for (std::string city: cities){
        std::cout << city << "\n";
    }
    for (auto distance: distances){
        std::cout << distance << "\n";
    }
}