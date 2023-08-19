#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblAbilityPassiveBehavior {
    CannotBePassive = 0,
    RefreshDuration = 1,
    IncreaseStackCount = 2,
    IncreaseAndRefresh = 3,
    EAblAbilityPassiveBehavior_MAX = 4,
};
#pragma pack(pop)
