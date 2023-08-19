#pragma once
#include <cstdint>
#include "FGlobalLightGroupsGroupName.hpp"
#pragma pack(push, 1)
struct FLightGroupSettings {
    FName Region; // 0x0
    FGlobalLightGroupsGroupName Group; // 0x8
}; // Size: 0x10
#pragma pack(pop)
