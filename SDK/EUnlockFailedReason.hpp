#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUnlockFailedReason {
    KeyNotFound = 0,
    AlohomoraLevelNotMet = 1,
    EUnlockFailedReason_MAX = 2,
};
#pragma pack(pop)
