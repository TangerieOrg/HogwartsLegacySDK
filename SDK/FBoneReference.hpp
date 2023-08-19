#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBoneReference {
    FName BoneName; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
