#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPlatformRuntimeAudioCompressionOverrides {
    bool bOverrideCompressionTimes; // 0x0
    char pad_1[0x3];
    float DurationThreshold; // 0x4
    int32_t MaxNumRandomBranches; // 0x8
    int32_t SoundCueQualityIndex; // 0xc
}; // Size: 0x10
#pragma pack(pop)
