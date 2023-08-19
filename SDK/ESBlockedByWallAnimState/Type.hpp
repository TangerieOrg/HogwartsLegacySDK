#pragma once
#include <cstdint>
namespace ESBlockedByWallAnimState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    BothHandsOut = 1,
    RightHandOut = 2,
    LeftHandOut = 3,
    ESBlockedByWallAnimState_MAX = 4,
};
#pragma pack(pop)
}
