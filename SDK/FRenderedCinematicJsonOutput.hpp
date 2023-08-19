#pragma once
#include <cstdint>
#include "FRenderedCinematicInfo.hpp"
#pragma pack(push, 1)
struct FRenderedCinematicJsonOutput {
    TArray<FRenderedCinematicInfo> CinematicInfos; // 0x0
}; // Size: 0x10
#pragma pack(pop)
