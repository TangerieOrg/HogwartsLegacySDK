#pragma once
#include <cstdint>
namespace EDodgeState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    DodgeForward = 1,
    DodgeLeft = 2,
    DodgeRight = 3,
    DodgeBackward = 4,
    EDodgeState_MAX = 5,
};
#pragma pack(pop)
}
