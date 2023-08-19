#pragma once
#include <cstdint>
namespace EOpenDoorAnimState {
#pragma pack(push, 1)
enum Type : uint8_t {
    LeftHand = 0,
    RightHand = 1,
    BothHands = 2,
    EOpenDoorAnimState_MAX = 3,
};
#pragma pack(pop)
}
