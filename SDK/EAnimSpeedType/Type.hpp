#pragma once
#include <cstdint>
namespace EAnimSpeedType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Stopped = 0,
    Undetermined = 1,
    WalkSlow = 2,
    Walk = 3,
    Jog = 4,
    Sprint = 5,
    EAnimSpeedType_MAX = 6,
};
#pragma pack(pop)
}
