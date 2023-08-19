#pragma once
#include <cstdint>
#include "EMonoChannelUpmixMethod.hpp"
#include "EPanningMethod.hpp"
#include "EVoiceSampleRate.hpp"
#include "FAudioQualitySettings.hpp"
#include "FDefaultAudioBusSettings.hpp"
#include "FSoftObjectPath.hpp"
#include "FSoundDebugEntry.hpp"
#include "UDeveloperSettings.hpp"
class USoundClass;
class USoundConcurrency;
#pragma pack(push, 1)
class UAudioSettings : public UDeveloperSettings {
public:
    FSoftObjectPath DefaultSoundClassName; // 0x38
    FSoftObjectPath DefaultMediaSoundClassName; // 0x50
    FSoftObjectPath DefaultSoundConcurrencyName; // 0x68
    FSoftObjectPath DefaultBaseSoundMix; // 0x80
    FSoftObjectPath VoiPSoundClass; // 0x98
    FSoftObjectPath MasterSubmix; // 0xb0
    FSoftObjectPath BaseDefaultSubmix; // 0xc8
    FSoftObjectPath ReverbSubmix; // 0xe0
    FSoftObjectPath EQSubmix; // 0xf8
    EVoiceSampleRate VoiPSampleRate; // 0x110
    float DefaultReverbSendLevel; // 0x114
    int32_t MaximumConcurrentStreams; // 0x118
    float GlobalMinPitchScale; // 0x11c
    float GlobalMaxPitchScale; // 0x120
    char pad_124[0x4];
    TArray<FAudioQualitySettings> QualityLevels; // 0x128
    uint8_t bAllowPlayWhenSilent : 1; // 0x138
    uint8_t bDisableMasterEQ : 1; // 0x138
    uint8_t bAllowCenterChannel3DPanning : 1; // 0x138
    uint8_t pad_bitfield_138_3 : 5;
    char pad_139[0x3];
    uint32_t NumStoppingSources; // 0x13c
    EPanningMethod PanningMethod; // 0x140
    EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x141
    char pad_142[0x6];
    FString DialogueFilenameFormat; // 0x148
    TArray<FSoundDebugEntry> DebugSounds; // 0x158
    TArray<FDefaultAudioBusSettings> DefaultAudioBuses; // 0x168
    USoundClass* DefaultSoundClass; // 0x178
    USoundClass* DefaultMediaSoundClass; // 0x180
    USoundConcurrency* DefaultSoundConcurrency; // 0x188
    char pad_190[0x8];
    static UAudioSettings* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
