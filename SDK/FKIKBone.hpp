#pragma once
#include <cstdint>
#include "EFKIKBranchType.hpp"
#pragma pack(push, 1)
struct FKIKBone {
    FName FKBoneName; // 0x0
    FName IKBoneName; // 0x8
    EFKIKBranchType FKIKBranch; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
