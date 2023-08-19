#pragma once
#include <cstdint>
#include "AVolume.hpp"
class UEphemerisBasis;
#pragma pack(push, 1)
class ADayNightBasisVolume : public AVolume {
public:
    char pad_280[0x8];
    UEphemerisBasis* BasisOverride; // 0x288
    float Priority; // 0x290
    bool bUnbounded; // 0x294
    bool bEnabled; // 0x295
    char pad_296[0x2];
    static ADayNightBasisVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x298
#pragma pack(pop)
