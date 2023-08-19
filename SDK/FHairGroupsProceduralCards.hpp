#pragma once
#include <cstdint>
#include "FHairCardsClusterSettings.hpp"
#include "FHairCardsGeometrySettings.hpp"
#include "FHairCardsTextureSettings.hpp"
#pragma pack(push, 1)
struct FHairGroupsProceduralCards {
    FHairCardsClusterSettings ClusterSettings; // 0x0
    FHairCardsGeometrySettings GeometrySettings; // 0x8
    FHairCardsTextureSettings TextureSettings; // 0x24
    int32_t Version; // 0x34
}; // Size: 0x38
#pragma pack(pop)
