#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsDebugTimeOfDay {
    FDateTime DateTime; // 0x0
    FString DateTimeString; // 0x8
}; // Size: 0x18
#pragma pack(pop)
