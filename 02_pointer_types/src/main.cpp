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
    *(p0+0) = 'A';
    *(p0+1) = 'B';
    *(p0+2) = 'C';
    *(p0+3) = 'D';
    *(p0+4) = '\0';
    std::cout<<"b : "<<b<<std::endl;
    std::cout<<"size of char is : "<<sizeof(char)<<std::endl;
    std::cout<<"address : "<<p0<<", value : "<<*p0<<std::endl;
    std::cout<<"address : "<<p0+1<<", value : "<<*(p0+1)<<std::endl;

    std::cout<<"----------"<<std::endl;

    void *p1;
    p1 = p;
    std::cout<<"address : "<<p<<", value : "<<*p<<std::endl;
    std::cout<<"address : "<<p+1<<", value : "<<*(p+1)<<std::endl;

    //Cannot derefernce void pointer directly. The compiler doesn't
    //know the type and how much memory to access. 
    std::cout<<"address : "<<p1<<'\n';//<<*p1<<std::endl;

    //For the same reasons, pointer arithmetic is not valid
    //std::cout<<"address : "<<p1+1<<", value : "<<*(p1+1)<<std::endl;
    
    //Must let compiler know the type
    std::cout<<"p1 : "<<  *(static_cast<int*>(p1))<<std::endl;
    //casting then to int ^dereferncing

    delete[] p0;

    return 0;
}
