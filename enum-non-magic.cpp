/******************************************************************************
File Name     : main.cpp
Author        : Dingjiang Zhou
Email         : zhoudingjiang@gmail.com
Create Time   : Mon, Mar. 08th, 2021. 08:58:59 PM
Last Modified :
Purpose       :
-------------------------------------------------------------------------------
INPUTS

OUTPUTS

******************************************************************************/
#include <iostream>

using namespace std;

enum class Enum_Example_t {
    NoError = 0,
    Error1  = -1,
    Error2  = -2,
};

ostream& operator<<(ostream& os, const Enum_Example_t& err) {
    switch (err) {
    case Enum_Example_t::NoError:
        os << "NoError";
        break;
    case Enum_Example_t::Error1:
        os << "Error1";
        break;
    case Enum_Example_t::Error2:
        os << "Error2";
        break;
    default:
        break;
    }
    return os;
}

int main(int argc, char* argv[]) {
    Enum_Example_t err = Enum_Example_t::NoError;
    std::cout << err << " = " << ( int )err << std::endl;
    err = Enum_Example_t::Error2;
    std::cout << err << " = " << ( int )err << std::endl;
    return 0;
}
