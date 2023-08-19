#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EReactionPlayMultiFxTaskType : uint8_t {
    UseImpactLocationAndDirectionInverse = 0,
    UseImpactDirectionInverseOnly = 1,
    EReactionPlayMultiFxTaskType_MAX = 2,
};
#pragma pack(pop)
