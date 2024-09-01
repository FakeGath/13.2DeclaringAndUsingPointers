//Library that includes basic commands in c++
#include <iostream>

int main(){

    //declare pointers
    int* p_number();
    double p_fractional_number();

    //initialize pointers at nullptr

    int* p_number1{nullptr};

    int* p_fractional_number1 {nullptr};

    std::cout<<"sizeof(int): " <<sizeof(int)<< std::endl;
    std::cout<<"sizeof(double): " <<sizeof(double)<< std::endl;
    std::cout<<"sizeof(double*): " <<sizeof(double*)<< std::endl;
    std::cout<<"sizeof(int*): " <<sizeof(int*)<< std::endl;
    std::cout<<"sizeof(p_number1): " <<sizeof(p_number1)<< std::endl;
    std::cout<<"sizeof(p_fractiona_number1): " <<sizeof(p_fractional_number1)<< std::endl;

    std::cout<<"--------------------------------------------------------"<< std::endl;   

    int int_var {43};
    int* p_int_var {&int_var};

    std::cout<<"int var: "<<int_var<<std::endl;
    std::cout<<"p_int_var: "<<p_int_var<<std::endl;

    // read the value on the pointer

    std::cout<<"Value: "<<*p_int_var<<std::endl;

    return 0;
}