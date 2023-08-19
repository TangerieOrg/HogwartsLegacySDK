#pragma once
#include <cstdint>
#include "ESubmixEffectConvolutionReverbBlockSize.hpp"
#include "FSubmixEffectConvolutionReverbSettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
class UAudioImpulseResponse;
#pragma pack(push, 1)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset {
public:
    UAudioImpulseResponse* ImpulseResponse; // 0x68
    FSubmixEffectConvolutionReverbSettings Settings; // 0x70
    ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
    bool bEnableHardwareAcceleration; // 0x99
    char pad_9a[0x56];
    static USubmixEffectConvolutionReverbPreset* StaticClass();
    void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);
    void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);
}; // Size: 0xf0
#pragma pack(pop)
