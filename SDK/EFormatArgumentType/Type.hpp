#pragma once
#include <cstdint>
namespace EFormatArgumentType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Int = 0,
    UInt = 1,
    Float = 2,
    Double = 3,
    Text = 4,
    Gender = 5,
    EFormatArgumentType_MAX = 6,
};
#pragma pack(pop)
}
