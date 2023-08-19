#pragma once
#include <cstdint>
#include "FAISenseAffiliationFilter.hpp"
#include "UAISenseConfig.hpp"
class UClass;
#pragma pack(push, 1)
class UAISenseConfig_Sight : public UAISenseConfig {
public:
    UClass* Implementation; // 0x48
    float SightRadius; // 0x50
    float LoseSightRadius; // 0x54
    float PeripheralVisionAngleDegrees; // 0x58
    FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
    float AutoSuccessRangeFromLastSeenLocation; // 0x60
    float PointOfViewBackwardOffset; // 0x64
    float NearClippingRadius; // 0x68
    char pad_6c[0x4];
    static UAISenseConfig_Sight* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
