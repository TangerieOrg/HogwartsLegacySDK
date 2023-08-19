#pragma once
#include <cstdint>
#include "FManualMoonSetup.hpp"
#include "UGlobalLightingBlendableDayNightBase.hpp"
#pragma pack(push, 1)
class UGlobalLightingBlendableDayNightOverrideMoon : public UGlobalLightingBlendableDayNightBase {
public:
    FManualMoonSetup Moon; // 0x30
    bool bMoonIsSecondaryDirectionalLight; // 0x48
    char pad_49[0x7];
    static UGlobalLightingBlendableDayNightOverrideMoon* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
