#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class AWorldMapBoundsVolume : public AVolume {
public:
    bool IsWorldMap; // 0x280
    char pad_281[0x7];
    FString MapName; // 0x288
    char pad_298[0x20];
    static AWorldMapBoundsVolume* StaticClass();
}; // Size: 0x2b8
#pragma pack(pop)
