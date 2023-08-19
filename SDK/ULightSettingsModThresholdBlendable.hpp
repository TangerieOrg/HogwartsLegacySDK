#pragma once
#include <cstdint>
#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "ULightSettingsModThreshold.hpp"
#pragma pack(push, 1)
class ULightSettingsModThresholdBlendable : public ULightSettingsModThreshold {
public:
    FGlobalLightingCustomBlendableNameScalar Blendable; // 0x28
    static ULightSettingsModThresholdBlendable* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
