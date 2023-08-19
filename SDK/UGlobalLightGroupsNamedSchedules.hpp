#pragma once
#include <cstdint>
#include "FGlobalLightGroupsScheduleMap.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UGlobalLightGroupsNamedSchedules : public UDataAsset {
public:
    FGlobalLightGroupsScheduleMap ScheduleMap; // 0x30
    static UGlobalLightGroupsNamedSchedules* StaticClass();
    void RebuildSchedules();
}; // Size: 0x80
#pragma pack(pop)
