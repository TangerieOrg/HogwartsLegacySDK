#pragma once
#include <cstdint>
#include "EWindSourceType.hpp"
#include "UWindSourceComponentBaseData.hpp"
#pragma pack(push, 1)
class UWindDirectionalSourceComponent : public UWindSourceComponentBaseData {
public:
    float BlendDistance; // 0x240
    float Radius; // 0x244
    bool bPointWind; // 0x248
    bool bUseScaleAsBounds; // 0x249
    char pad_24a[0x6];
    static UWindDirectionalSourceComponent* StaticClass();
    void SetWindType(EWindSourceType InNewType);
    void SetUseScaleAsBounds(bool bNewUseScaleAsBounds);
    void SetStrength(float InNewStrength);
    void SetSpeed(float InNewSpeed);
    void SetRadius(float InNewRadius);
    void SetMinimumGustAmount(float InNewMinGust);
    void SetMaximumGustAmount(float InNewMaxGust);
    void SetBlendDistance(float InNewBlendDistance);
}; // Size: 0x250
#pragma pack(pop)
