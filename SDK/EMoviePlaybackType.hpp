#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMoviePlaybackType : uint8_t {
    MT_Normal = 0,
    MT_Looped = 1,
    MT_LoadingLoop = 2,
    MT_MAX = 3,
};
#pragma pack(pop)
