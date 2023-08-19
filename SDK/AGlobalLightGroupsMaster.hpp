#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLightComponentSchedules.hpp"
class UGlobalLightGroupsRegionGroupMap;
#pragma pack(push, 1)
class AGlobalLightGroupsMaster : public AActor {
public:
    UGlobalLightGroupsRegionGroupMap* RegionGroupMap; // 0x248
    char pad_250[0x60];
    FLightComponentSchedules LightComponentSchedules; // 0x2b0
    FName LastRegion; // 0x300
    FName ActiveRegion; // 0x308
    static AGlobalLightGroupsMaster* StaticClass();
}; // Size: 0x310
#pragma pack(pop)
