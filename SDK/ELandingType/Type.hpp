#pragma once
#include <cstdint>
namespace ELandingType {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    IdleLand = 1,
    WalkingLand = 2,
    JoggingLand = 3,
    SprintingLand = 4,
    LadderSlideLand = 5,
    LadderJumpBottomLand = 6,
    ELandingType_MAX = 7,
};
#pragma pack(pop)
}
