#pragma once
#include <cstdint>
#include "FHairLODSettings.hpp"
#pragma pack(push, 1)
struct FHairGroupsLOD {
    TArray<FHairLODSettings> LODs; // 0x0
    float ClusterWorldSize; // 0x10
    float ClusterScreenSizeScale; // 0x14
}; // Size: 0x18
#pragma pack(pop)
