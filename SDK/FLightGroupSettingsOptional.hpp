#pragma once
#include <cstdint>
#include "FGlobalLightGroupsGroupName.hpp"
#pragma pack(push, 1)
struct FLightGroupSettingsOptional {
    FName Region; // 0x0
    FGlobalLightGroupsGroupName Group; // 0x8
    bool bSetGroup; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
