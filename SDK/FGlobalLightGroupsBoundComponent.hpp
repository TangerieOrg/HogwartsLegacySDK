#pragma once
#include <cstdint>
#include "FLightGroupBoundComponentSettings.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsBoundComponent {
    char pad_0[0x8];
    FLightGroupBoundComponentSettings Settings; // 0x8
}; // Size: 0x14
#pragma pack(pop)
