#pragma once
#include <cstdint>
#include "FMaterialParameterSetter.hpp"
#include "FMultiFXWrapper.hpp"
#pragma pack(push, 1)
struct FNpcFxTimer {
    float TimeStart; // 0x0
    float TimeStop; // 0x4
    FMaterialParameterSetter MaterialParameterSetter; // 0x8
    FMultiFXWrapper MultiFX; // 0xa0
    char pad_d8[0x58];
}; // Size: 0x130
#pragma pack(pop)
