#pragma once
#include <cstdint>
#include "ARenderSettingsPostProcessingVolume.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class ARenderSettingsExposureSpeedTransitionVolume : public ARenderSettingsPostProcessingVolume {
public:
    UCurveFloat* BlendCurve; // 0x8c0
    float SpeedUp; // 0x8c8
    float SpeedDown; // 0x8cc
    uint8_t bUseFilteredIndoors : 1; // 0x8d0
    uint8_t bOverride_SpeedUp : 1; // 0x8d0
    uint8_t bOverride_SpeedDown : 1; // 0x8d0
    uint8_t pad_bitfield_8d0_3 : 5;
    char pad_8d1[0xf];
    static ARenderSettingsExposureSpeedTransitionVolume* StaticClass();
}; // Size: 0x8e0
#pragma pack(pop)
