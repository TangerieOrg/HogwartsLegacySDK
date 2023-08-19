#pragma once
#include <cstdint>
#include "EAIParamType.hpp"
#pragma pack(push, 1)
struct FEnvNamedValue {
    FName ParamName; // 0x0
    EAIParamType ParamType; // 0x8
    char pad_9[0x3];
    float Value; // 0xc
}; // Size: 0x10
#pragma pack(pop)
