#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FCooldownPickupData {
    UClass* CooldownPickupActor; // 0x0
    float weight; // 0x8
    char pad_c[0x54];
    float FocusGain; // 0x60
    float HealthGainPercent; // 0x64
}; // Size: 0x68
#pragma pack(pop)
