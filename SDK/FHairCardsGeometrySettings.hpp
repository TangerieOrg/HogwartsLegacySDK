#pragma once
#include <cstdint>
#include "EHairCardsClusterType.hpp"
#include "EHairCardsGenerationType.hpp"
#pragma pack(push, 1)
struct FHairCardsGeometrySettings {
    EHairCardsGenerationType GenerationType; // 0x0
    char pad_1[0x3];
    int32_t CardsCount; // 0x4
    EHairCardsClusterType ClusterType; // 0x8
    char pad_9[0x3];
    float MinSegmentLength; // 0xc
    float AngularThreshold; // 0x10
    float MinCardsLength; // 0x14
    float MaxCardsLength; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
