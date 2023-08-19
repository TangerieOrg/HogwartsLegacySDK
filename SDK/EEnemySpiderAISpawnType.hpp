#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemySpiderAISpawnType : uint8_t {
    None = 0,
    UpFromGround = 1,
    FallFromSky = 2,
    DescentOnWeb = 3,
    WakeUp = 4,
    Tumble = 5,
    TumbleAndDie = 6,
    EEnemySpiderAISpawnType_MAX = 7,
};
#pragma pack(pop)
