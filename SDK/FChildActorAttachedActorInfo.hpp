#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FChildActorAttachedActorInfo {
    char pad_0[0x8];
    FName SocketName; // 0x8
    FTransform RelativeTransform; // 0x10
}; // Size: 0x40
#pragma pack(pop)
