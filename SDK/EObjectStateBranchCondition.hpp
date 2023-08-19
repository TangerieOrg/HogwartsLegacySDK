#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EObjectStateBranchCondition : uint8_t {
    IsDead = 0,
    IsDazed = 1,
    IsWoundedKneeling = 2,
    EObjectStateBranchCondition_MAX = 3,
};
#pragma pack(pop)
