#pragma once
#include <cstdint>
#include "FBox.hpp"
#pragma pack(push, 1)
struct FBroadphaseSettings {
    bool bUseMBPOnClient; // 0x0
    bool bUseMBPOnServer; // 0x1
    bool bUseMBPOuterBounds; // 0x2
    char pad_3[0x1];
    FBox MBPBounds; // 0x4
    FBox MBPOuterBounds; // 0x20
    uint32_t MBPNumSubdivs; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
