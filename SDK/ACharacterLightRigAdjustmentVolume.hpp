#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FCharacterLightRigAdjustments.hpp"
#pragma pack(push, 1)
class ACharacterLightRigAdjustmentVolume : public AVolume {
public:
    FCharacterLightRigAdjustments Adjustments; // 0x280
    int32_t Priority; // 0x298
    bool bEnabled; // 0x29c
    char pad_29d[0x3];
    float InterpolationDistance; // 0x2a0
    bool bUnbounded; // 0x2a4
    char pad_2a5[0x3];
    static ACharacterLightRigAdjustmentVolume* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
