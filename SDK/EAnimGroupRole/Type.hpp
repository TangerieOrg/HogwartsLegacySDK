#pragma once
#include <cstdint>
namespace EAnimGroupRole {
#pragma pack(push, 1)
enum Type : uint8_t {
    CanBeLeader = 0,
    AlwaysFollower = 1,
    AlwaysLeader = 2,
    TransitionLeader = 3,
    TransitionFollower = 4,
    EAnimGroupRole_MAX = 5,
};
#pragma pack(pop)
}
