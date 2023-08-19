#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkAudioSessionCategoryOptions {
    MixWithOthers = 0,
    DuckOthers = 1,
    AllowBluetooth = 2,
    DefaultToSpeaker = 3,
    EAkAudioSessionCategoryOptions_MAX = 4,
};
#pragma pack(pop)
