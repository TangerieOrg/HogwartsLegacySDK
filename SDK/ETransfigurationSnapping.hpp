#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransfigurationSnapping : uint8_t {
    NoSnapping = 0,
    ConjurationSurface = 1,
    Fixed = 2,
    PowerpointSnapping = 3,
    WallSnapping = 4,
    ETransfigurationSnapping_MAX = 5,
};
#pragma pack(pop)
