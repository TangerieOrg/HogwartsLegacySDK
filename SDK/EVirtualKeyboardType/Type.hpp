#pragma once
#include <cstdint>
namespace EVirtualKeyboardType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Default = 0,
    Number = 1,
    Web = 2,
    Email = 3,
    Password = 4,
    AlphaNumeric = 5,
    EVirtualKeyboardType_MAX = 6,
};
#pragma pack(pop)
}
