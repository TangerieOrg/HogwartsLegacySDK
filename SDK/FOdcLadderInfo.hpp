#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FOdcLadderInfo {
    int32_t LadderHeight; // 0x0
    float LadderMeshHeight; // 0x4
    bool bOverrideBottomLinkEnd; // 0x8
    char pad_9[0x3];
    FVector BottomLinkEnd; // 0xc
    bool bOverrideTopLinkEnd; // 0x18
    char pad_19[0x3];
    FVector TopLinkEnd; // 0x1c
}; // Size: 0x28
#pragma pack(pop)
