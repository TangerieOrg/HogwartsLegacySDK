#pragma once
#include <cstdint>
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeAudioFadeInterpolant : public ULerpVolumeInterpolant {
public:
    FName RTPC; // 0x28
    float UpdateThreshold; // 0x30
    char pad_34[0x4];
    static ULerpVolumeAudioFadeInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
