#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AkCodecId : uint8_t {
    None = 0,
    PCM = 1,
    ADPCM = 2,
    XMA = 3,
    Vorbis = 4,
    AAC = 10,
    ATRAC9 = 12,
    OpusNX = 17,
    AkOpus = 19,
    AkOpusWEM = 20,
    AkCodecId_MAX = 21,
};
#pragma pack(pop)
