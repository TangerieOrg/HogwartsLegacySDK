#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAblAbilityEnemyMoveVelocitySource : uint8_t {
    External = 0,
    Fall = 1,
    CustomForward = 2,
    CustomBackward = 3,
    Custom = 4,
    Jump = 5,
    Continued = 6,
    Slide = 7,
    EAblAbilityEnemyMoveVelocitySource_MAX = 8,
};
#pragma pack(pop)
