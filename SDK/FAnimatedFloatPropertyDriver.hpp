#pragma once
#include <cstdint>
#include "FAnimatedPropertyDriverBase.hpp"
#pragma pack(push, 1)
struct FAnimatedFloatPropertyDriver : public FAnimatedPropertyDriverBase {
    float DefaultValue; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
