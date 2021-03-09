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
#include <magic_enum.hpp>

using namespace std;

enum class Enum_Example_t {
    NoError = 0,
    Error1  = -1,
    Error2  = -2,
};

int main(int argc, char* argv[]) {

    // --------------------------
    // output the name of an enum class variable
    Enum_Example_t err = Enum_Example_t::Error1;
    // auto           err_str = magic_enum::enum_name(err);
    std::basic_string_view<char> err_str = magic_enum::enum_name(err);
    std::cout << err_str << std::endl;

    // --------------------------
    // output the names of all variables in an enum
    constexpr auto& names = magic_enum::enum_names<Enum_Example_t>();
    std::cout << "Enum_Example_t: ";
    for (const auto& n : names) {
        std::cout << " " << n;
    }
    std::cout << std::endl;
    return 0;
}
