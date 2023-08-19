#pragma once
#include <cstdint>
#include "FGlobalLightGroupsBoundComponents.hpp"
#include "FGlobalLightGroupsGroupSchedules.hpp"
#include "FGlobalLightGroupsMask.hpp"
#include "FGlobalLightGroupsMaskLock.hpp"
class UGlobalLightGroupsGroupNameMap;
#pragma pack(push, 1)
struct FGlobalLightGroupsRegion {
    FName Name; // 0x0
    FGlobalLightGroupsGroupSchedules GroupSchedules; // 0x8
    UGlobalLightGroupsGroupNameMap* GroupNameMap; // 0x58
    FGlobalLightGroupsBoundComponents BoundComponents; // 0x60
    FGlobalLightGroupsMask LightMaskTarget; // 0x80
    FGlobalLightGroupsMaskLock LockState; // 0x88
    FGlobalLightGroupsMask LightMask; // 0x98
    FGlobalLightGroupsMask LastMask; // 0xa0
    bool bInitialEventsSent; // 0xa8
    char pad_a9[0x7];
}; // Size: 0xb0
#pragma pack(pop)
