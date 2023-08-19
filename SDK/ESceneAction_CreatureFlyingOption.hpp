#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneAction_CreatureFlyingOption : uint8_t {
    StopFlying = 0,
    StartFlying = 1,
    ESceneAction_MAX = 2,
};
#pragma pack(pop)
