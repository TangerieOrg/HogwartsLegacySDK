#pragma once
#include <cstdint>
namespace ELastWandCastState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Base = 1,
    FromLeft = 2,
    FromRight = 3,
    Transition = 4,
    LeftFoot = 5,
    LeftFoot_Transition = 6,
    ELastWandCastState_MAX = 7,
};
#pragma pack(pop)
}
