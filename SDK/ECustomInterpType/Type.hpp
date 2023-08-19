#pragma once
#include <cstdint>
namespace ECustomInterpType {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Constant = 1,
    Interp = 2,
    EaseIn = 3,
    EaseOut = 4,
    EaseInOut = 5,
    ECustomInterpType_MAX = 6,
};
#pragma pack(pop)
}
