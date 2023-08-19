#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "ESubLevelID.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class ANavigationRedirectionVolume : public AVolume {
public:
    FVector RedirectionLocation; // 0x280
    bool ForceOverlandArea; // 0x28c
    ESubLevelID DeactivateIfLevelLoaded; // 0x28d
    char pad_28e[0x2];
    static ANavigationRedirectionVolume* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
