#pragma once
#include <cstdint>
namespace EEdgeState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    FirmlyOnGround = 1,
    EdgeBlocked = 2,
    SlightlyOverEdge = 3,
    FullyPastEdge = 4,
    MovingBackToEdge = 5,
    EEdgeState_MAX = 6,
};
#pragma pack(pop)
}
