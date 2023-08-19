#pragma once
#include <cstdint>
#include "FRigControl.hpp"
#pragma pack(push, 1)
struct FRigControlHierarchy {
    char pad_0[0x98];
    TArray<FRigControl> Controls; // 0x98
    char pad_a8[0x50];
    TArray<FName> Selection; // 0xf8
}; // Size: 0x108
#pragma pack(pop)
