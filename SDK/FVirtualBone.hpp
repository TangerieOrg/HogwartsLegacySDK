#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVirtualBone {
    FName SourceBoneName; // 0x0
    FName TargetBoneName; // 0x8
    FName VirtualBoneName; // 0x10
}; // Size: 0x18
#pragma pack(pop)
