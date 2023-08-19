#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBinkMediaPlayerBinkBufferModes : uint8_t {
    BMASM_Bink_Stream = 0,
    BMASM_Bink_PreloadAll = 1,
    BMASM_Bink_StreamUntilResident = 2,
    BMASM_Bink_MAX = 3,
};
#pragma pack(pop)
