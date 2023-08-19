#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRiverAudioPoint {
    FVector Location; // 0x0
    float SpeedOfFlow; // 0xc
}; // Size: 0x10
#pragma pack(pop)
