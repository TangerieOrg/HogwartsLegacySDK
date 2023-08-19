#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGlobalLightGroupsRegionGroupMap : public UObject {
public:
    char pad_28[0x78];
    static UGlobalLightGroupsRegionGroupMap* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
