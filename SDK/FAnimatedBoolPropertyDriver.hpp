#pragma once
#include <cstdint>
#include "FAnimatedPropertyDriverBase.hpp"
#pragma pack(push, 1)
struct FAnimatedBoolPropertyDriver : public FAnimatedPropertyDriverBase {
    bool DefaultValue; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
