#include <iostream>
#include <fstream>
#include <regex>
//#include <match_results>
#include "input.h"

int main (){

    std::ifstream input = std::ifstream("input.txt");

    std::cout << "Parsing input" << std::endl;

    std::string line;
    size_t nombre_lu = 0;
    std::string password;

    int count = 0;

    for(std::string line : vect) {
        //std::cout << "line : " << line << std::endl;
        std::size_t pos1 = line.find("-");
        std::size_t pos2 = line.find(": ");
        //std::cout << "pos 1 : " << pos1 << std::endl;
        //std::cout << "pos 2 : " << pos2 << std::endl;

        std::string str1 = line.substr(0, pos1);
        std::string str2 = line.substr(pos1+1, pos2);
        std::size_t pos3 = str2.find(" ");
        std::size_t pos4 = str2.find(":");

        std::string str3 = str2.substr(0, pos3);
        //std::string str5 = str2.substr(pos3+1, pos4);
        const char ch = str2[pos3+1];
        std::string str4 = line.substr(pos2 + 2, line.size());
        std::cout << "str 1 : " << str1 << std::endl;
        //std::cout << "str 2 : " << str2 << std::endl;
        std::cout << "str 3 : " << str3 << std::endl;
        std::cout << "str 4 : " << str4 << std::endl;
        std::cout << "str 5 : " << ch << std::endl;

        const char* c1 = str1.c_str();
        const char* c2 = str3.c_str();
        int p1 = atoi(c1);
        int p2 = atoi(c2);
        
        if (str4[p1] == ch && str4[p2] != ch){
            count++;
            std::cout << str4 << " is OK" << std::endl;
            std::cout << count << std::endl;

        }
    }
    std::cout << count << std::endl;


}