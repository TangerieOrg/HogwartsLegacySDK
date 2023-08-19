#pragma once
#include <cstdint>
#include "UWindSourceComponentBase.hpp"
#pragma pack(push, 1)
class UWindModulateComponent : public UWindSourceComponentBase {
public:
    float Outdoors; // 0x220
    float Priority; // 0x224
    float Strength; // 0x228
    float BlendDistance; // 0x22c
    float SpeedMod; // 0x230
    float MinGustMod; // 0x234
    float MaxGustMod; // 0x238
    bool bAffectWindDirection; // 0x23c
    bool bUseScaleAsBounds; // 0x23d
    char pad_23e[0x2];
    static UWindModulateComponent* StaticClass();
    void SetUseScaleAsBounds(bool bNewUseScaleAsBounds);
    void SetStrength(float InNewStrength);
    void SetSpeedMod(float InNewSpeed);
    void SetPriority(float InNewPriority);
    void SetOutdoors(float InNewOutdoors);
    void SetMinimumGustMod(float InNewMinGustMod);
    void SetMaximumGustMod(float InNewMaxGustMod);
    void SetBlendDistance(float InNewBlendDistance);
    void SetAffectWindDirection(bool bNewAffectWindDirection);
}; // Size: 0x240
#pragma pack(pop)
