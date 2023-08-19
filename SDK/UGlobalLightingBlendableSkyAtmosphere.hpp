#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class USkyAtmosphereParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableSkyAtmosphere : public UGlobalLightingBlendable {
public:
    USkyAtmosphereParams* SkyAtmosphereParameters; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableSkyAtmosphere* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
