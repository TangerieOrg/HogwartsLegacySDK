#pragma once
#include <cstdint>
#include "ESubmixEffectDynamicsChannelLinkMode.hpp"
#include "ESubmixEffectDynamicsKeySource.hpp"
#include "ESubmixEffectDynamicsPeakMode.hpp"
#include "ESubmixEffectDynamicsProcessorType.hpp"
#include "FSubmixEffectDynamicProcessorFilterSettings.hpp"
class UAudioBus;
class USoundSubmix;
#pragma pack(push, 1)
struct FSubmixEffectDynamicsProcessorSettings {
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
    ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
    ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2
    char pad_3[0x1];
    float InputGainDb; // 0x4
    float ThresholdDb; // 0x8
    float Ratio; // 0xc
    float KneeBandwidthDb; // 0x10
    float LookAheadMsec; // 0x14
    float AttackTimeMsec; // 0x18
    float ReleaseTimeMsec; // 0x1c
    ESubmixEffectDynamicsKeySource KeySource; // 0x20
    char pad_21[0x7];
    UAudioBus* ExternalAudioBus; // 0x28
    USoundSubmix* ExternalSubmix; // 0x30
    uint8_t bChannelLinked : 1; // 0x38
    uint8_t bAnalogMode : 1; // 0x38
    uint8_t bBypass : 1; // 0x38
    uint8_t bKeyAudition : 1; // 0x38
    uint8_t pad_bitfield_38_4 : 4;
    char pad_39[0x3];
    float KeyGainDb; // 0x3c
    float OutputGainDb; // 0x40
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x44
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x50
    char pad_5c[0x4];
}; // Size: 0x60
#pragma pack(pop)
