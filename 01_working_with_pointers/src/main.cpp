#include <iostream>
//#include "utilities.h"

int main() {

/*
    int a;
    int *p;
    p = &a;
    a = 5;

    std::cout<<"p : "<<p<<std::endl;
    std::cout<<"&a: "<<&a<<std::endl;
    std::cout<<"&p: "<<&p<<std::endl;
    std::cout<<"*p: "<<*p<<std::endl;
    std::cout<<" a: "<<a<<std::endl;

    *p = 8;

    std::cout<<"*p: "<<*p<<std::endl;
    std::cout<<" a: "<<a<<std::endl;
*/
/*
    int a; //integer
    int *p; //pointer to integer 
    p = &a;

    char c; //character
    char *p0; //pointer to character

    double d; //double
    double *p1; //pointer to double
*/
    int a;
    int *p;
    p = &a; // &a = address of a
    std::cout<<"The uninitialized variable stores garbage value:"<<std::endl;
    std::cout<<" a : "<< a<<std::endl;//prints value of a
    std::cout<<"&a : "<<&a<<std::endl;//address of a 
    std::cout<<"---------"<<std::endl;
    std::cout<<" p : "<< p<<std::endl;//value of p = address of a
    std::cout<<"&p : "<<&p<<std::endl;//address of p
    std::cout<<"*p : "<<*p<<std::endl;//*p- value at & pointed by p

    std::cout<<'\n';

    a = 10;

    std::cout<<"initializing a to hold the value 10:"<<std::endl;
    std::cout<<" a : "<< a<<std::endl;//prints value of a
    std::cout<<"&a : "<<&a<<std::endl;//address of a
    std::cout<<"---------"<<std::endl;
    std::cout<<" p : "<< p<<std::endl;//value of p = address of a
    std::cout<<"&p : "<<&p<<std::endl;//address of p
    std::cout<<"*p : "<<*p<<std::endl;//*p

    std::cout<<'\n';
    
    *p = 12; //dereferencing p, storing in value of 12

    std::cout<<"dereferencing the & stored in p(a) to store 12"<<std::endl;
    std::cout<<" a : "<< a<<std::endl;//prints value of a
    std::cout<<"&a : "<<&a<<std::endl;//address of a
    std::cout<<"---------"<<std::endl;
    std::cout<<" p : "<< p<<std::endl;//value of p = address of a
    std::cout<<"&p : "<<&p<<std::endl;//address of p
    std::cout<<"*p : "<<*p<<std::endl;//*p

    std::cout<<'\n';

    int b = 20;
    *p = b;//Will address in p change to point to b??

    std::cout<<"The value of b will be stored in a."<<std::endl;
    std::cout<<" a : "<< a<<std::endl;//prints value of a
    std::cout<<"&a : "<<&a<<std::endl;//address of a
    std::cout<<"---------"<<std::endl;
    std::cout<<" p : "<< p<<std::endl;//value of p = address of a
    std::cout<<"&p : "<<&p<<std::endl;//address of p
    std::cout<<"*p : "<<*p<<std::endl;//& stored in p dereferenced

/*
    int *p1;
    *p1 = 5;// this undefined behavior.
           // p is initialized with a
           // garbage address, and 
           // will cause a CRASH. 
*/
    return 0;
}
