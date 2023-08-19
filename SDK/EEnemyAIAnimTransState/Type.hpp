#pragma once
#include <cstdint>
namespace EEnemyAIAnimTransState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    IdleStart = 1,
    IdleBlended = 2,
    LocomotionStart = 3,
    LocomotionBlended = 4,
    EEnemyAIAnimTransState_MAX = 5,
};
#pragma pack(pop)
}
