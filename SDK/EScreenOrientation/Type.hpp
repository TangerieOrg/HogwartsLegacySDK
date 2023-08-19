#pragma once
#include <cstdint>
namespace EScreenOrientation {
#pragma pack(push, 1)
enum Type : uint8_t {
    Unknown = 0,
    Portrait = 1,
    PortraitUpsideDown = 2,
    LandscapeLeft = 3,
    LandscapeRight = 4,
    FaceUp = 5,
    FaceDown = 6,
    EScreenOrientation_MAX = 7,
};
#pragma pack(pop)
}
