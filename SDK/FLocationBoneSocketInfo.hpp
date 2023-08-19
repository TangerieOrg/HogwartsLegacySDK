#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLocationBoneSocketInfo {
    FName BoneSocketName; // 0x0
    FVector Offset; // 0x8
}; // Size: 0x14
#pragma pack(pop)
