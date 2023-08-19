#pragma once
#include <cstdint>
#include "UWindSourceComponentBase.hpp"
#pragma pack(push, 1)
class UWindAlignComponent : public UWindSourceComponentBase {
public:
    float Outdoors; // 0x220
    float Priority; // 0x224
    float Strength; // 0x228
    float SpeedMod; // 0x22c
    float TransitionDistance; // 0x230
    bool bBidirectional; // 0x234
    char pad_235[0xb];
    static UWindAlignComponent* StaticClass();
    void SetTransitionDistance(float InTransitionDistance);
    void SetStrength(float InNewStrength);
    void SetSpeedMod(float InNewSpeed);
    void SetPriority(float InNewPriority);
    void SetOutdoors(float InNewOutdoors);
    void SetBidirectional(bool bInNewBidirectional);
}; // Size: 0x240
#pragma pack(pop)
