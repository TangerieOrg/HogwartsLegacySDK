#pragma once
#include <cstdint>
#include "FStaticParameterBase.hpp"
#pragma pack(push, 1)
struct FStaticSwitchParameter : public FStaticParameterBase {
    bool Value; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
