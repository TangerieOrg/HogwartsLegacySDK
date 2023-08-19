#pragma once
#include <cstdint>
#include "EPhoenixScalabilityLevel.hpp"
class UWorld;
class AActor;
#pragma pack(push, 1)
struct FLumosScalabilitySettingsMatch {
    UWorld* World; // 0x0
    AActor* Caster; // 0x8
    bool bIsPlayer; // 0x10
    EPhoenixScalabilityLevel PlatformLevel; // 0x11
    char pad_12[0x6];
}; // Size: 0x18
#pragma pack(pop)
