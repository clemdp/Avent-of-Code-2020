#include <iostream>
#include <fstream>
#include <vector>

int main(){

    std::ifstream input = std::ifstream("input.txt");
    
    const char tree = '#';
    std::string line;

    int column1 = 0;
    int column3 = 0;
    int column5 = 0;
    int column7 = 0;
    int linenum = 0;
    int column2 = 0;
    int cpt1 = 0;
    int cpt3 = 0;
    int cpt5 = 0;
    int cpt7 = 0;
    int cpt2 = 0;
    while(input >> line){
        if (line[column1] == tree){
            cpt1++;
            line[column1] = 'X';
        } else {
            line[column1] = 'O';
        }
        if (line[column3] == tree){
            cpt3++;
            line[column3] = 'X';
        }else {
            line[column3] = 'O';
        } 
        if (line[column5] == tree){
            cpt5++;
            line[column5] = 'X';
        }else {
            line[column5] = 'O';
        }
        if (line[column7] == tree){
            cpt7++;
            line[column7] = 'X';
        }else {
            line[column7] = 'O';
        }
        if ( (linenum%2) == 0) {
            column2 = (column2 + 1)%line.size();
            std::cout << "column2 : " << column2 << std::endl;
            if(line[column2] == tree){
                cpt2++;
                line[column2] = 'X';
            }else {
                line[column2] = 'O';
            }
        }
        column1 = (column1 + 1)%line.size();
        column3 = (column3 + 3)%line.size();
        column5 = (column5 + 5)%line.size();
        column7 = (column7 + 7)%line.size();
        linenum++;
        std::cout << "line " << linenum << ": " << line << std::endl;
    }

    double res = cpt1 * cpt3;
    res = res * cpt5;
    res = res * cpt7;
    res = res * cpt2;

    

    std::cout << "right 1, down 1 : " << cpt1 << std::endl;
    std::cout << "right 3, down 1 : " << cpt3 << std::endl;
    std::cout << "right 5, down 1 : " << cpt5 << std::endl;
    std::cout << "right 7, down 1 : " << cpt7 << std::endl;
    std::cout << "right 1, down 2 : " << cpt2 << std::endl;
    std::cout << "res : " << res << std::endl;
    return 1;
}
