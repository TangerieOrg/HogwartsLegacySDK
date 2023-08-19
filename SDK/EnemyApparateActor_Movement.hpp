#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EnemyApparateActor_Movement : uint8_t {
    ToLoc = 0,
    ToTarget = 1,
    EnemyApparateActor_MAX = 2,
};
#pragma pack(pop)
