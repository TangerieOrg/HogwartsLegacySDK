#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UAnimatedLightsClusterSettings : public UDataAsset {
public:
    float TickEveryFrameDistanceMeters; // 0x30
    float SlowTickDistanceMeters; // 0x34
    float SlowTickRateSeconds; // 0x38
    float MaxTickEveryFrameDistanceMeters; // 0x3c
    float MaxSlowTickDistanceMeters; // 0x40
    float InverseRange; // 0x44
    float MaxInverseRange; // 0x48
    float SlowTickInverseRange; // 0x4c
    bool bAutoScale; // 0x50
    char pad_51[0x7];
    static UAnimatedLightsClusterSettings* StaticClass();
    void SetRange(float NewTickEveryFrameDistanceMeters, float NewSlowTickDistanceMeters);
}; // Size: 0x58
#pragma pack(pop)
