#pragma once
#include <cstdint>
#include "UObject.hpp"
class APhoenixMapRegion;
#pragma pack(push, 1)
class URegionData : public UObject {
public:
    FString RegionName; // 0x28
    bool IsUnlocked; // 0x38
    bool IsNewlyUnlocked; // 0x39
    char pad_3a[0x6];
    APhoenixMapRegion* SplineActor; // 0x40
    float CurrentAlphaValue; // 0x48
    float FadeTime; // 0x4c
    static URegionData* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
