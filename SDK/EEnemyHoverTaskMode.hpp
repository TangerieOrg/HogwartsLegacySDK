#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EEnemyHoverTaskMode : uint8_t {
    Start = 0,
    Hover = 1,
    Land = 2,
    EEnemyHoverTaskMode_MAX = 3,
};
#pragma pack(pop)
