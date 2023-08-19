#pragma once
#include <cstdint>
#include "AVolume.hpp"
class AMercunaNavOctree;
#pragma pack(push, 1)
class AMercunaNavExclusionVolume : public AVolume {
public:
    bool bApplyToAllNavOctrees; // 0x280
    char pad_281[0x7];
    TArray<AMercunaNavOctree*> NavOctrees; // 0x288
    static AMercunaNavExclusionVolume* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
