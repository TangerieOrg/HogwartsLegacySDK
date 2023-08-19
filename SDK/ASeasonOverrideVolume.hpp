#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ASeasonOverrideVolume : public AVolume {
public:
    char pad_280[0x8];
    float Priority; // 0x288
    bool bEnabled; // 0x28c
    char pad_28d[0x3];
    static ASeasonOverrideVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x290
#pragma pack(pop)
