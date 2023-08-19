#pragma once
#include <cstdint>
#include "FRigSpace.hpp"
#pragma pack(push, 1)
struct FRigSpaceHierarchy {
    char pad_0[0x20];
    TArray<FRigSpace> Spaces; // 0x20
    char pad_30[0x50];
    TArray<FName> Selection; // 0x80
}; // Size: 0x90
#pragma pack(pop)
