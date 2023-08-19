#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBinkMoviePlayerBinkBufferModes : uint8_t {
    MP_Bink_Stream = 0,
    MP_Bink_PreloadAll = 1,
    MP_Bink_StreamUntilResident = 2,
    MP_Bink_MAX = 3,
};
#pragma pack(pop)
