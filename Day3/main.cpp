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
    int cpt1 = 0;
    int cpt3 = 0;
    int cpt5 = 0;
    int cpt7 = 0;
    int cpt2 = 0;
    while(input >> line){
        if (line[column1] == tree){
            cpt1++;
        }
        if (line[column3] == tree){
            cpt3++;
        } 
        if (line[column5] == tree){
            cpt5++;
        }
        if (line[column7] == tree){
            cpt7++;
        }
        if ((linenum%2 == 0) && (line[column1] == tree)){
            cpt2++;
        }
        column1 = (column1 + 1)%line.size();
        column3 = (column3 + 3)%line.size();
        column5 = (column5 + 5)%line.size();
        column7 = (column7 + 7)%line.size();
        linenum++;
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
