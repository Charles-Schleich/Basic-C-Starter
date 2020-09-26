#include "module1/Simple.hpp"
#include <iostream>


Simple::Simple(int x){
    num_people=x;
}

void Simple::incr_people(){
    num_people+=1;
}

void Simple::print(){
    std::cout << "Num people:" << num_people << std::endl;
}
