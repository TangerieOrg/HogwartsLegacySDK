#pragma once
#include <cstdint>
namespace ETexturePowerOfTwoSetting {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    PadToPowerOfTwo = 1,
    PadToSquarePowerOfTwo = 2,
    ETexturePowerOfTwoSetting_MAX = 3,
};
#pragma pack(pop)
}
