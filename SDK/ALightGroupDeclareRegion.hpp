#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FGlobalLightGroupsRegionName.hpp"
class ULightOnOffFXList;
#pragma pack(push, 1)
class ALightGroupDeclareRegion : public AVolume {
public:
    char pad_280[0x8];
    FGlobalLightGroupsRegionName RegionName; // 0x288
    ULightOnOffFXList* FXList; // 0x290
    float Priority; // 0x298
    bool bUnbounded; // 0x29c
    char pad_29d[0x3];
    static ALightGroupDeclareRegion* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
