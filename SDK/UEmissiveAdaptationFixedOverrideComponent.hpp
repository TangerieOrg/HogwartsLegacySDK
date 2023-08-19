#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "UEmissiveAdaptationOverrideComponent.hpp"
#pragma pack(push, 1)
class UEmissiveAdaptationFixedOverrideComponent : public UEmissiveAdaptationOverrideComponent {
public:
    char pad_f0[0x8];
    float AdaptationEV100; // 0xf8
    int32_t Affects; // 0xfc
    bool bIncludeBias; // 0x100
    bool bAllowOutdoorsDayTimeBoostFactor; // 0x101
    char pad_102[0xe];
    FPostProcessSettings PostProcessSettings; // 0x110
    float PostProcessingPriority; // 0x700
    bool bBlendPostProcessSettings; // 0x704
    bool bUsePostProcessSettings; // 0x705
    char pad_706[0xa];
    static UEmissiveAdaptationFixedOverrideComponent* StaticClass();
}; // Size: 0x710
#pragma pack(pop)
