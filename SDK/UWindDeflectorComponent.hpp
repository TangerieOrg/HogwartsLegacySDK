#pragma once
#include <cstdint>
#include "UWindSourceComponentBase.hpp"
#pragma pack(push, 1)
class UWindDeflectorComponent : public UWindSourceComponentBase {
public:
    float Outdoors; // 0x220
    float Priority; // 0x224
    float Strength; // 0x228
    float SpeedMod; // 0x22c
    float TransitionDistanceAlongDirection; // 0x230
    float FullEffectAlongNormal; // 0x234
    bool bBidirectional; // 0x238
    bool bFlipNormal; // 0x239
    char pad_23a[0x6];
    static UWindDeflectorComponent* StaticClass();
    void SetTransitionDistanceAlongDirection(float InNewTransitionDistanceAlongDirection);
    void SetStrength(float InNewStrength);
    void SetSpeedMod(float InNewSpeed);
    void SetPriority(float InNewPriority);
    void SetOutdoors(float InNewOutdoors);
    void SetFullEffectAlongNormal(float InNewFullEffectAlongNormal);
    void SetFlipNormal(bool bInNewFlipNormal);
    void SetBidirectional(bool bInNewBidirectional);
}; // Size: 0x240
#pragma pack(pop)
