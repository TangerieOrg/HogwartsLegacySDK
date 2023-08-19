#pragma once
#include <cstdint>
#include "FLastRenderedExposurePair.hpp"
#include "FVector.hpp"
class UWorld;
#pragma pack(push, 1)
struct FEmissiveAdaptationWorldState {
    UWorld* World; // 0x0
    FVector Eye; // 0x8
    float NightDay; // 0x14
    float Overcast; // 0x18
    float OutdoorsIndoors; // 0x1c
    float FilteredOutdoorsIndoors; // 0x20
    char pad_24[0x4];
    FLastRenderedExposurePair LastExposure; // 0x28
    bool bDayNightSystemValid; // 0x90
    char pad_91[0x7];
}; // Size: 0x98
#pragma pack(pop)
