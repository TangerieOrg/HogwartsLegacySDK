#pragma once
#include <cstdint>
namespace EParryState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Swipe1 = 1,
    Swipe2 = 2,
    RightToLeft_Down = 3,
    LeftToRight_Up = 4,
    RightToLeft_Up = 5,
    LeftToRight_Down = 6,
    EParryState_MAX = 7,
};
#pragma pack(pop)
}
