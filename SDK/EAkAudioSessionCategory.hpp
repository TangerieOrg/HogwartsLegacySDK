#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkAudioSessionCategory : int32_t {
    Ambient = 0,
    SoloAmbient = 1,
    PlayAndRecord = 2,
    EAkAudioSessionCategory_MAX = 3,
};
#pragma pack(pop)
