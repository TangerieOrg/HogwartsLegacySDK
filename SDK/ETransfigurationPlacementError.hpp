#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransfigurationPlacementError : uint8_t {
    NoError = 0,
    NotOnSurface = 1,
    NotInPlayableSpace = 2,
    SpaceOccupied = 3,
    ETransfigurationPlacementError_MAX = 4,
};
#pragma pack(pop)
