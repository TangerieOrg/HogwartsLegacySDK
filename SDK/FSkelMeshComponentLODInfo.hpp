#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSkelMeshComponentLODInfo {
    TArray<bool> HiddenMaterials; // 0x0
    char pad_10[0x38];
}; // Size: 0x48
#pragma pack(pop)
