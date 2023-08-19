#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioRecordingExportType : uint8_t {
    SoundWave = 0,
    WavFile = 1,
    EAudioRecordingExportType_MAX = 2,
};
#pragma pack(pop)
