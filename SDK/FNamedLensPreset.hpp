#pragma once
#include <cstdint>
#include "FCameraLensSettings.hpp"
#pragma pack(push, 1)
struct FNamedLensPreset {
    FString Name; // 0x0
    FCameraLensSettings LensSettings; // 0x10
}; // Size: 0x28
#pragma pack(pop)
