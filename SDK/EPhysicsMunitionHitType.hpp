#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhysicsMunitionHitType : int32_t {
    Success = 0,
    Blocked = 1,
    Terrain = 2,
    EPhysicsMunitionHitType_MAX = 3,
};
#pragma pack(pop)
