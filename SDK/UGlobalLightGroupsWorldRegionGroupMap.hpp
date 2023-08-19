#pragma once
#include <cstdint>
#include "UObject.hpp"
class UGlobalLightGroupsRegionGroupMap;
#pragma pack(push, 1)
class UGlobalLightGroupsWorldRegionGroupMap : public UObject {
public:
    char pad_28[0x50];
    UGlobalLightGroupsRegionGroupMap* PresetMap; // 0x78
    static UGlobalLightGroupsWorldRegionGroupMap* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
