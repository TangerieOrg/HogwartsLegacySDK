#pragma once
#include <cstdint>
namespace EMouseCursor {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Default = 1,
    TextEditBeam = 2,
    ResizeLeftRight = 3,
    ResizeUpDown = 4,
    ResizeSouthEast = 5,
    ResizeSouthWest = 6,
    CardinalCross = 7,
    Crosshairs = 8,
    Hand = 9,
    GrabHand = 10,
    GrabHandClosed = 11,
    SlashedCircle = 12,
    EyeDropper = 13,
    EMouseCursor_MAX = 14,
};
#pragma pack(pop)
}
