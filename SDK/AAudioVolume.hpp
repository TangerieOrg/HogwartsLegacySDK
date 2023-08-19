#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FAudioVolumeSubmixOverrideSettings.hpp"
#include "FAudioVolumeSubmixSendSettings.hpp"
#include "FInteriorSettings.hpp"
#include "FReverbSettings.hpp"
#pragma pack(push, 1)
class AAudioVolume : public AVolume {
public:
    float Priority; // 0x280
    uint8_t bEnabled : 1; // 0x284
    uint8_t pad_bitfield_284_1 : 7;
    char pad_285[0x3];
    FReverbSettings Settings; // 0x288
    FInteriorSettings AmbientZoneSettings; // 0x2a8
    char pad_2cc[0x4];
    TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2d0
    TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2e0
    static AAudioVolume* StaticClass();
    void SetSubmixSendSettings(TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);
    void SetSubmixOverrideSettings(TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);
    void SetReverbSettings(FReverbSettings& NewReverbSettings);
    void SetPriority(float NewPriority);
    void SetInteriorSettings(FInteriorSettings& NewInteriorSettings);
    void SetEnabled(bool bNewEnabled);
    void OnRep_bEnabled();
}; // Size: 0x2f0
#pragma pack(pop)
