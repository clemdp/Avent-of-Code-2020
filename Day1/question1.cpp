#include <iostream>
#include <vector>
#include "input.h"

int main(){

    int op1, op2;
    std::vector<int> values(std::begin(tab), std::end(tab));

    for (int i = 0; i < values.size(); i++){
        for (int j = i; j < values.size(); j++){
            for (int k = j; k < values.size(); k++){

                if (values[i] + values[j] + values[k] == 2020){
                    std::cout << "val1 : " << values[i] << std::endl;
                    std::cout << "val2 : " << values[j] << std::endl;
                    std::cout << "val2 : " << values[k] << std::endl;
                    std::cout << "mult = " << values[i] * values[j] * values[k] << std::endl;
                    return 0;
                }
                if ( (i == j) || (j == k) || (i == k) ){
                    continue;
                }
            }
        }
    }
    std::cout << "no answer" << std::endl;
    return -1;
}