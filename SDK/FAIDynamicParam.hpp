#pragma once
#include <cstdint>
#include "EAIParamType.hpp"
#include "FBlackboardKeySelector.hpp"
#pragma pack(push, 1)
struct FAIDynamicParam {
    FName ParamName; // 0x0
    EAIParamType ParamType; // 0x8
    char pad_9[0x3];
    float Value; // 0xc
    FBlackboardKeySelector BBKey; // 0x10
}; // Size: 0x38
#pragma pack(pop)
