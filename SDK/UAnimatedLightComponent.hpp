#pragma once
#include <cstdint>
#include "EAnimatedLightComponentNoiseType.hpp"
#include "UAnimatedLightComponentBase.hpp"
class UCurveLinearColor;
class UCurveFloat;
#pragma pack(push, 1)
class UAnimatedLightComponent : public UAnimatedLightComponentBase {
public:
    UCurveLinearColor* ColorCurve_DEPRICATED; // 0x260
    UCurveFloat* IntensityCurve_DEPRICATED; // 0x268
    float WaveSpeed1; // 0x270
    float WaveSpeed2; // 0x274
    float MinIntensity; // 0x278
    EAnimatedLightComponentNoiseType IntensityNoiseType; // 0x27c
    char pad_27d[0x3];
    float IntensityNoiseSpeed; // 0x280
    float IntensityNoiseFactor; // 0x284
    EAnimatedLightComponentNoiseType HueNoiseType; // 0x288
    char pad_289[0x3];
    float HueNoiseSpeed; // 0x28c
    float HueNoiseAmount; // 0x290
    EAnimatedLightComponentNoiseType SaturationNoiseType; // 0x294
    char pad_295[0x3];
    float SaturationNoiseSpeed; // 0x298
    float SaturationNoiseAmount; // 0x29c
    uint8_t UseMathBased : 1; // 0x2a0
    uint8_t bAddIntensityNoise : 1; // 0x2a0
    uint8_t bAddHSVNoise : 1; // 0x2a0
    uint8_t bLoopColorCurve_DEPRICATED : 1; // 0x2a0
    uint8_t bLoopIntensityCurve_DEPRICATED : 1; // 0x2a0
    uint8_t pad_bitfield_2a0_5 : 3;
    char pad_2a1[0xf];
    static UAnimatedLightComponent* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
