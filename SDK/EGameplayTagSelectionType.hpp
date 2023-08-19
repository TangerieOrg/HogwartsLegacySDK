#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameplayTagSelectionType {
    None = 0,
    NonRestrictedOnly = 1,
    RestrictedOnly = 2,
    All = 3,
    EGameplayTagSelectionType_MAX = 4,
};
#pragma pack(pop)
