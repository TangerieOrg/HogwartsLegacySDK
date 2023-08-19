#pragma once
#include <cstdint>
namespace EPathFollowingStatus {
#pragma pack(push, 1)
enum Type : uint8_t {
    Idle = 0,
    Waiting = 1,
    Paused = 2,
    Moving = 3,
    EPathFollowingStatus_MAX = 4,
};
#pragma pack(pop)
}
