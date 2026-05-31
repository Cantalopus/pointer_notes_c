#include <iostream>
//#include "utilities.h"

int main() {

    int a = 1025;
    int *p;
    p = &a;
    std::cout<<"size of integer is : "<<sizeof(int)<<std::endl;
    std::cout<<"address : "<<p<<", value : "<<*p<<std::endl;
    std::cout<<"address : "<<p+1<<", value : "<<*(p+1)<<std::endl;

    std::cout<<"----------"<<std::endl;

    char b = 'A';
    char* p0 = new char[5];
    *(p0+1) = 'B';
    *(p0+2) = 'C';
    *(p0+3) = 'D';
    *(p0+4) = '\0';
    std::cout<<"size of char is : "<<sizeof(char)<<std::endl;
    std::cout<<"address : "<<p0<<", value : "<<*p0<<std::endl;
    std::cout<<"address : "<<p0+1<<", value : "<<*(p0+1)<<std::endl;
    
    delete[] p0;

    return 0;
}
