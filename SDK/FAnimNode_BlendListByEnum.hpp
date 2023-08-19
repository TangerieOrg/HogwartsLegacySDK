#pragma once
#include <cstdint>
#include "FAnimNode_BlendListBase.hpp"
#pragma pack(push, 1)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase {
    TArray<int32_t> EnumToPoseIndex; // 0x98
    uint8_t ActiveEnumValue; // 0xa8
    char pad_a9[0x7];
}; // Size: 0xb0
#pragma pack(pop)
