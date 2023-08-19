#pragma once
#include <cstdint>
#include "FMeshRule.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
struct FMeshOverride {
    TArray<FMeshRule> Rules; // 0x0
    USkeletalMesh* Mesh; // 0x10
}; // Size: 0x18
#pragma pack(pop)
