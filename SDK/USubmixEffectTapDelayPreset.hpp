#pragma once
#include <cstdint>
#include "FSubmixEffectTapDelaySettings.hpp"
#include "USoundEffectSubmixPreset.hpp"
struct FTapDelayInfo;
#pragma pack(push, 1)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset {
public:
    char pad_68[0x40];
    FSubmixEffectTapDelaySettings Settings; // 0xa8
    char pad_c0[0x18];
    static USubmixEffectTapDelayPreset* StaticClass();
    void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);
    void SetSettings(FSubmixEffectTapDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void RemoveTap(int32_t TapId);
    void GetTapIds(TArray<int32_t>& TapIds);
    void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);
    float GetMaxDelayInMilliseconds();
    void AddTap(int32_t& TapId);
}; // Size: 0xd8
#pragma pack(pop)
