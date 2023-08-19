#pragma once
#include <cstdint>
#include "ESubmixEffectDynamicsPeakMode.hpp"
#include "ESubmixEffectDynamicsProcessorType.hpp"
#include "FDynamicsBandSettings.hpp"
#pragma pack(push, 1)
struct FSubmixEffectMultibandCompressorSettings {
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
    ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
    char pad_2[0x2];
    float LookAheadMsec; // 0x4
    bool bLinkChannels; // 0x8
    bool bAnalogMode; // 0x9
    bool bFourPole; // 0xa
    char pad_b[0x5];
    TArray<FDynamicsBandSettings> Bands; // 0x10
}; // Size: 0x20
#pragma pack(pop)
