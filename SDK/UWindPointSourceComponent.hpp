#pragma once
#include <cstdint>
#include "UWindSourceComponentBaseData.hpp"
#pragma pack(push, 1)
class UWindPointSourceComponent : public UWindSourceComponentBaseData {
public:
    float Strength; // 0x240
    float Speed; // 0x244
    char pad_248[0x8];
    static UWindPointSourceComponent* StaticClass();
    void SetStrength(float InNewStrength);
    void SetSpeed(float InNewSpeed);
    void SetRadius(float InNewRadius);
    void SetInnerRadius(float InNewInnerRadius);
}; // Size: 0x250
#pragma pack(pop)
