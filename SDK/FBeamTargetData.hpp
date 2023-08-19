#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBeamTargetData {
    FName TargetName; // 0x0
    float TargetPercentage; // 0x8
}; // Size: 0xc
#pragma pack(pop)
