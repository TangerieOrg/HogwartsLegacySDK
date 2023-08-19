#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TargetPerceptionIntent {
    None = 0,
    AsEnemy = 1,
    AsScheduledEntity = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
