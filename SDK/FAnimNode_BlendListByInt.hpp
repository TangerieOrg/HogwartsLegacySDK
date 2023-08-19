#pragma once
#include <cstdint>
#include "FAnimNode_BlendListBase.hpp"
#pragma pack(push, 1)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase {
    int32_t ActiveChildIndex; // 0x98
    char pad_9c[0x4];
}; // Size: 0xa0
#pragma pack(pop)
