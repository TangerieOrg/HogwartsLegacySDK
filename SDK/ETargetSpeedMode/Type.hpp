#pragma once
#include <cstdint>
namespace ETargetSpeedMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    IsIdling = 1,
    IsSlowWalking = 2,
    IsWalking = 3,
    IsWalkingOnly = 4,
    IsFastWalking = 5,
    IsFastWalkingOnly = 6,
    IsJogging = 7,
    IsJoggingOnly = 8,
    IsSprinting = 9,
    ETargetSpeedMode_MAX = 10,
};
#pragma pack(pop)
}
