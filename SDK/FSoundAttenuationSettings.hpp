#pragma once
#include <cstdint>
#include "EAirAbsorptionMethod.hpp"
#include "ECollisionChannel.hpp"
#include "EPriorityAttenuationMethod.hpp"
#include "EReverbSendMethod.hpp"
#include "ESoundSpatializationAlgorithm.hpp"
#include "FAttenuationSubmixSendSettings.hpp"
#include "FBaseAttenuationSettings.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSoundAttenuationPluginSettings.hpp"
#pragma pack(push, 1)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings {
    uint8_t bAttenuate : 1; // 0xb0
    uint8_t bSpatialize : 1; // 0xb0
    uint8_t bAttenuateWithLPF : 1; // 0xb0
    uint8_t bEnableListenerFocus : 1; // 0xb0
    uint8_t bEnableFocusInterpolation : 1; // 0xb0
    uint8_t bEnableOcclusion : 1; // 0xb0
    uint8_t bUseComplexCollisionForOcclusion : 1; // 0xb0
    uint8_t bEnableReverbSend : 1; // 0xb0
    uint8_t bEnablePriorityAttenuation : 1; // 0xb1
    uint8_t bApplyNormalizationToStereoSounds : 1; // 0xb1
    uint8_t bEnableLogFrequencyScaling : 1; // 0xb1
    uint8_t bEnableSubmixSends : 1; // 0xb1
    uint8_t pad_bitfield_b1_4 : 4;
    ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2
    char pad_b3[0x1];
    float BinauralRadius; // 0xb4
    EAirAbsorptionMethod AbsorptionMethod; // 0xb8
    ECollisionChannel OcclusionTraceChannel; // 0xb9
    EReverbSendMethod ReverbSendMethod; // 0xba
    EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xbb
    float OmniRadius; // 0xbc
    float StereoSpread; // 0xc0
    float LPFRadiusMin; // 0xc4
    float LPFRadiusMax; // 0xc8
    char pad_cc[0x4];
    FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd0
    FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158
    float LPFFrequencyAtMin; // 0x1e0
    float LPFFrequencyAtMax; // 0x1e4
    float HPFFrequencyAtMin; // 0x1e8
    float HPFFrequencyAtMax; // 0x1ec
    float FocusAzimuth; // 0x1f0
    float NonFocusAzimuth; // 0x1f4
    float FocusDistanceScale; // 0x1f8
    float NonFocusDistanceScale; // 0x1fc
    float FocusPriorityScale; // 0x200
    float NonFocusPriorityScale; // 0x204
    float FocusVolumeAttenuation; // 0x208
    float NonFocusVolumeAttenuation; // 0x20c
    float FocusAttackInterpSpeed; // 0x210
    float FocusReleaseInterpSpeed; // 0x214
    float OcclusionLowPassFilterFrequency; // 0x218
    float OcclusionVolumeAttenuation; // 0x21c
    float OcclusionInterpolationTime; // 0x220
    float ReverbWetLevelMin; // 0x224
    float ReverbWetLevelMax; // 0x228
    float ReverbDistanceMin; // 0x22c
    float ReverbDistanceMax; // 0x230
    float ManualReverbSendLevel; // 0x234
    FRuntimeFloatCurve CustomReverbSendCurve; // 0x238
    TArray<FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2c0
    float PriorityAttenuationMin; // 0x2d0
    float PriorityAttenuationMax; // 0x2d4
    float PriorityAttenuationDistanceMin; // 0x2d8
    float PriorityAttenuationDistanceMax; // 0x2dc
    float ManualPriorityAttenuation; // 0x2e0
    char pad_2e4[0x4];
    FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2e8
    FSoundAttenuationPluginSettings PluginSettings; // 0x370
}; // Size: 0x3a0
#pragma pack(pop)
