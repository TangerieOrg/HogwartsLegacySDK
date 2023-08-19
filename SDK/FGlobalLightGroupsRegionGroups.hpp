#pragma once
#include <cstdint>
class UGlobalLightGroupsNamedGroupSchedules;
class UGlobalLightGroupsNamedLightComponentSchedules;
#pragma pack(push, 1)
struct FGlobalLightGroupsRegionGroups {
    FName Region; // 0x0
    TArray<FName> Groups; // 0x8
    UGlobalLightGroupsNamedGroupSchedules* GroupSchedules; // 0x18
    UGlobalLightGroupsNamedLightComponentSchedules* LightComponentSchedules; // 0x20
    bool bForceGroup0OffGroup1On; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
