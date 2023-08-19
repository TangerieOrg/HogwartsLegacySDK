#pragma once
#include <cstdint>
#include "FGlobalLightGroupsBoundComponentList.hpp"
#include "FGlobalLightGroupsMask.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsBoundComponents {
    TArray<FGlobalLightGroupsBoundComponentList> ComponentGroups; // 0x0
    FGlobalLightGroupsMask LastLightMask; // 0x10
    FGlobalLightGroupsMask ForceUpdateMask; // 0x18
}; // Size: 0x20
#pragma pack(pop)
