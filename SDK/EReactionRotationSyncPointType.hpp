#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EReactionRotationSyncPointType : uint8_t {
    Instigator = 0,
    InstigatorInverse = 1,
    EReactionRotationSyncPointType_MAX = 2,
};
#pragma pack(pop)
