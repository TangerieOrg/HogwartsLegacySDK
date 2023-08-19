#pragma once
#include <cstdint>
#include "FLightCullingSettingsStackEntry.hpp"
#pragma pack(push, 1)
struct FLightCullingSettingsStack {
    TArray<FLightCullingSettingsStackEntry> Stack; // 0x0
}; // Size: 0x10
#pragma pack(pop)
