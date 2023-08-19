#pragma once
#include <cstdint>
#include "EHairCardsClusterType.hpp"
#pragma pack(push, 1)
struct FHairCardsClusterSettings {
    float ClusterDecimation; // 0x0
    EHairCardsClusterType Type; // 0x4
    bool bUseGuide; // 0x5
    char pad_6[0x2];
}; // Size: 0x8
#pragma pack(pop)
