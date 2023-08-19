#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AnimMainState : uint8_t {
    None = 0,
    React = 1,
    Abort = 2,
    Dead = 3,
    EEnemy_MAX = 4,
};
#pragma pack(pop)
