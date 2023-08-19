#pragma once
#include <cstdint>
#include "USynthComponent.hpp"
class UMotoSynthPreset;
struct FMotoSynthRuntimeSettings;
#pragma pack(push, 1)
class USynthComponentMoto : public USynthComponent {
public:
    UMotoSynthPreset* MotoSynthPreset; // 0x6e0
    float RPM; // 0x6e8
    char pad_6ec[0xb4];
    static USynthComponentMoto* StaticClass();
    void SetSettings(FMotoSynthRuntimeSettings& InSettings);
    void SetRPM(float InRPM, float InTimeSec);
    bool IsEnabled();
    void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);
}; // Size: 0x7a0
#pragma pack(pop)
