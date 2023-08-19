#pragma once
#include <cstdint>
#include "EVirtualizationMode.hpp"
#include "FSoundConcurrencySettings.hpp"
#include "FSoundSourceBusSendInfo.hpp"
#include "FSoundSubmixSendInfo.hpp"
#include "UObject.hpp"
class USoundClass;
class USoundAttenuation;
class USoundSubmixBase;
class USoundEffectSourcePresetChain;
class UAssetUserData;
#pragma pack(push, 1)
class USoundBase : public UObject {
public:
    char pad_28[0x8];
    USoundClass* SoundClassObject; // 0x30
    uint8_t bDebug : 1; // 0x38
    uint8_t bOverrideConcurrency : 1; // 0x38
    uint8_t bEnableBusSends : 1; // 0x38
    uint8_t bEnableBaseSubmix : 1; // 0x38
    uint8_t bEnableSubmixSends : 1; // 0x38
    uint8_t bHasDelayNode : 1; // 0x38
    uint8_t bHasConcatenatorNode : 1; // 0x38
    uint8_t bBypassVolumeScaleForPriority : 1; // 0x38
    EVirtualizationMode VirtualizationMode; // 0x39
    char pad_3a[0xa6];
    FSoundConcurrencySettings ConcurrencyOverrides; // 0xe0
    float Duration; // 0x108
    float MaxDistance; // 0x10c
    float TotalSamples; // 0x110
    float Priority; // 0x114
    USoundAttenuation* AttenuationSettings; // 0x118
    USoundSubmixBase* SoundSubmixObject; // 0x120
    TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x128
    USoundEffectSourcePresetChain* SourceEffectChain; // 0x138
    TArray<FSoundSourceBusSendInfo> BusSends; // 0x140
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x150
    TArray<UAssetUserData*> AssetUserData; // 0x160
    static USoundBase* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
