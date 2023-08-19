#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMovieSceneEasingSettings {
    int32_t AutoEaseInDuration; // 0x0
    int32_t AutoEaseOutDuration; // 0x4
    char pad_8[0x10];
    bool bManualEaseIn; // 0x18
    char pad_19[0x3];
    int32_t ManualEaseInDuration; // 0x1c
    char pad_20[0x10];
    bool bManualEaseOut; // 0x30
    char pad_31[0x3];
    int32_t ManualEaseOutDuration; // 0x34
}; // Size: 0x38
#pragma pack(pop)
