#pragma once
#include <cstdint>
#include "EAudioOutputTarget\Type.hpp"
#include "ESoundWaveLoadingBehavior.hpp"
#include "FSoundModulationDefaultSettings.hpp"
class USoundSubmix;
#pragma pack(push, 1)
struct FSoundClassProperties {
    float Volume; // 0x0
    float Pitch; // 0x4
    float LowPassFilterFrequency; // 0x8
    float AttenuationDistanceScale; // 0xc
    float LFEBleed; // 0x10
    float VoiceCenterChannelVolume; // 0x14
    float RadioFilterVolume; // 0x18
    float RadioFilterVolumeThreshold; // 0x1c
    uint8_t bApplyEffects : 1; // 0x20
    uint8_t bAlwaysPlay : 1; // 0x20
    uint8_t bIsUISound : 1; // 0x20
    uint8_t bIsMusic : 1; // 0x20
    uint8_t bCenterChannelOnly : 1; // 0x20
    uint8_t bApplyAmbientVolumes : 1; // 0x20
    uint8_t bReverb : 1; // 0x20
    uint8_t pad_bitfield_20_7 : 1;
    char pad_21[0x3];
    float Default2DReverbSendAmount; // 0x24
    FSoundModulationDefaultSettings ModulationSettings; // 0x28
    EAudioOutputTarget::Type OutputTarget; // 0x68
    ESoundWaveLoadingBehavior LoadingBehavior; // 0x69
    char pad_6a[0x6];
    USoundSubmix* DefaultSubmix; // 0x70
}; // Size: 0x78
#pragma pack(pop)
