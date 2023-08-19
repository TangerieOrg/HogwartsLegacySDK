#pragma once
#include <cstdint>
#include "FHairAdvancedRenderingSettings.hpp"
#include "FHairGeometrySettings.hpp"
#include "FHairShadowSettings.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FHairGroupsRendering {
    FName MaterialSlotName; // 0x0
    UMaterialInterface* Material; // 0x8
    FHairGeometrySettings GeometrySettings; // 0x10
    FHairShadowSettings ShadowSettings; // 0x20
    FHairAdvancedRenderingSettings AdvancedSettings; // 0x2c
    char pad_2e[0x2];
}; // Size: 0x30
#pragma pack(pop)
