#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FGlobalLightGroupsRegionGroups.hpp"
class ULightOnOffFXList;
#pragma pack(push, 1)
class ALightGroupDefineNewRegion : public AVolume {
public:
    char pad_280[0x8];
    FGlobalLightGroupsRegionGroups RegionGroups; // 0x288
    ULightOnOffFXList* FXList; // 0x2b8
    float Priority; // 0x2c0
    bool bUnbounded; // 0x2c4
    char pad_2c5[0x3];
    static ALightGroupDefineNewRegion* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
