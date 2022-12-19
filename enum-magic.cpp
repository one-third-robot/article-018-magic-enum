#include <iostream>
// #define MAGIC_ENUM_RANGE_MAX 256
#include <magic_enum.hpp>

using namespace std;

enum class Enum_Example_t {
    NoError = 0,
    Error1 = -1,
    Error2 = -2,
};

enum class NmtMode {
    Start = 0x01,
    Stop = 0x02,
    PreOp = 0x80,
    Reset = 0x81,
    ResetComm = 0x82,
};

static void Nmt(NmtMode mode) {
    std::cout << magic_enum::enum_name(mode) << std::endl;
}
int main(int argc, char* argv[]) {

    // --------------------------
    // output the name of an enum class variable
    Enum_Example_t err = Enum_Example_t::Error1;
    // auto           err_str = magic_enum::enum_name(err);
    std::basic_string_view<char> err_str = magic_enum::enum_name(err);
    std::cout << err_str << std::endl;

    // --------------------------
    // output the names of all variables in an enum
    constexpr auto& n1 = magic_enum::enum_names<Enum_Example_t>();
    std::cout << "Enum_Example_t: ";
    for (const auto& n : n1) {
        std::cout << " " << n;
    }
    std::cout << std::endl;

    // --------------------------
    // output the names of all variables in an enum
    constexpr auto& n2 = magic_enum::enum_names<NmtMode>();
    std::cout << "NmtMode: ";
    for (const auto& n : n2) {
        std::cout << " " << n;
    }
    std::cout << std::endl;

    std::cout << "output ResetComm name: "
              << magic_enum::enum_name(NmtMode::ResetComm);

    Nmt(NmtMode::Stop);

    return 0;
}
