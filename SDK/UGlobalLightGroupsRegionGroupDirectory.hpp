#pragma once
#include <cstdint>
#include "UObject.hpp"
class UGlobalLightGroupsRegionGroupRegistry;
class UGlobalLightGroupsWorldRegionGroupMap;
#pragma pack(push, 1)
class UGlobalLightGroupsRegionGroupDirectory : public UObject {
public:
    UGlobalLightGroupsRegionGroupRegistry* Registry; // 0x28
    UGlobalLightGroupsWorldRegionGroupMap* WorldRegionGroupMap; // 0x30
    static UGlobalLightGroupsRegionGroupDirectory* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
