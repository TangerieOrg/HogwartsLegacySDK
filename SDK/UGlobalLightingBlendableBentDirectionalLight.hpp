#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "UGlobalLightingBlendableBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableBentDirectionalLight : public UGlobalLightingBlendableBase {
public:
    char pad_28[0x8];
    FQuat SunDirection; // 0x30
    float SunIntensityMod; // 0x40
    float SkyLightIntensityMod; // 0x44
    bool bValid; // 0x48
    char pad_49[0x7];
    static UGlobalLightingBlendableBentDirectionalLight* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
