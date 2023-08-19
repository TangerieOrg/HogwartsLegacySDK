#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerformTaskContainerType : uint8_t {
    LeadingPlayer = 0,
    EnemyPatrol = 1,
    Custom = 2,
    EPerformTaskContainerType_MAX = 3,
};
#pragma pack(pop)
