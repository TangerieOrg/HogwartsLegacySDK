#pragma once
#include <cstdint>
namespace EChannelMaskParameterColor {
#pragma pack(push, 1)
enum Type : uint8_t {
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    EChannelMaskParameterColor_MAX = 4,
};
#pragma pack(pop)
}
