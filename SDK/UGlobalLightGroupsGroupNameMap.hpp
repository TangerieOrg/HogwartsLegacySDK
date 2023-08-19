#pragma once
#include <cstdint>
#include "UObject.hpp"
class UGlobalLightGroupsNamedGroupSchedules;
class UGlobalLightGroupsNamedLightComponentSchedules;
#pragma pack(push, 1)
class UGlobalLightGroupsGroupNameMap : public UObject {
public:
    char pad_28[0x50];
    TArray<FName> GroupNames; // 0x78
    UGlobalLightGroupsNamedGroupSchedules* GroupSchedules; // 0x88
    UGlobalLightGroupsNamedLightComponentSchedules* LightComponentSchedules; // 0x90
    int32_t ReferenceCount; // 0x98
    bool bForceGroup0OffGroup1On; // 0x9c
    char pad_9d[0x3];
    static UGlobalLightGroupsGroupNameMap* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
