#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAkAudioSessionMode : int32_t {
    Default = 0,
    VoiceChat = 1,
    GameChat = 2,
    VideoRecording = 3,
    Measurement = 4,
    MoviePlayback = 5,
    VideoChat = 6,
    EAkAudioSessionMode_MAX = 7,
};
#pragma pack(pop)
