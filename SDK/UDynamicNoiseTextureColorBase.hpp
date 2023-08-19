#pragma once
#include <cstdint>
#include "UDynamicNoiseTextureBase.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UDynamicNoiseTextureColorBase : public UDynamicNoiseTextureBase {
public:
    UCurveLinearColor* Palette; // 0x50
    bool bWantMask; // 0x58
    char pad_59[0x7];
    static UDynamicNoiseTextureColorBase* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
