#include <iostream>
#include <fstream>
#include <vector>

int main() {

    std::ifstream input = std::ifstream("input.txt");

    std::string complete_line;
    std::string line;
    int bad_line = 0;
    int good_line = 0;

    bool byr = false;
    bool iyr = false;
    bool eyr = false;
    bool hgt = false;
    bool hcl = false;
    bool ecl = false;
    bool pid = false;

    int nok = 0;

    while (input >> line){
        complete_line.append(line);
        //std::cout << "complete line : " << complete_line << std::endl;
        std::cout << "line : " << line << std::endl;
    }
    std::cout << "bad lines : " << bad_line << std::endl;
    std::cout << "good lines : " << good_line << std::endl;

}