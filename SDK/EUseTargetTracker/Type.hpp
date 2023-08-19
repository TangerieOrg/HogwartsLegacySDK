#pragma once
#include <cstdint>
namespace EUseTargetTracker {
#pragma pack(push, 1)
enum Type : uint8_t {
    Facing = 0,
    LookAt = 1,
    AimAt = 2,
    EUseTargetTracker_MAX = 3,
};
#pragma pack(pop)
}
