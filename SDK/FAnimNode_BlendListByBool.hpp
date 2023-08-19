#pragma once
#include <cstdint>
#include "FAnimNode_BlendListBase.hpp"
#pragma pack(push, 1)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase {
    bool bActiveValue; // 0x98
    char pad_99[0x7];
}; // Size: 0xa0
#pragma pack(pop)
