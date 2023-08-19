#pragma once
#include <cstdint>
#include "FGlobalLightGroupsRegionGroups.hpp"
#include "UDataAsset.hpp"
class UGlobalLightGroupsNamedLightComponentSchedules;
#pragma pack(push, 1)
class UGlobalLightGroupsRegionGroupRegistry : public UDataAsset {
public:
    TArray<FGlobalLightGroupsRegionGroups> RegionGroups; // 0x30
    UGlobalLightGroupsNamedLightComponentSchedules* RegionFreeLightComponentSchedules; // 0x40
    static UGlobalLightGroupsRegionGroupRegistry* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
