#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ACreatureTetherVolume : public AVolume {
public:
    bool bIsActive; // 0x280
    bool bCanBeAutoDetected; // 0x281
    char pad_282[0x6];
    static ACreatureTetherVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
