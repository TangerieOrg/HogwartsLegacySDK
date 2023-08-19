#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioSpectrumBandPresetType : uint8_t {
    KickDrum = 0,
    SnareDrum = 1,
    Voice = 2,
    Cymbals = 3,
    EAudioSpectrumBandPresetType_MAX = 4,
};
#pragma pack(pop)
