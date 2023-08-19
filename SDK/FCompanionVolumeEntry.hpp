#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FCompanionVolumeEntry {
    AActor* Volume; // 0x0
    char pad_8[0x20];
}; // Size: 0x28
#pragma pack(pop)
