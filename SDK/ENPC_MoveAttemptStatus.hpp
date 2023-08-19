#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_MoveAttemptStatus {
    None = 0,
    Success = 1,
    NoNavData = 2,
    NoSafeNavPoint = 3,
    StartBlocked = 4,
    UpdateBlocked = 5,
    AbruptHeadingChange = 6,
    HeadingOffscreen = 7,
    WillEnterCorridor = 8,
    PassTooCloseToTarget = 9,
    NoPath = 10,
    ConstrainLocFailed = 11,
    NoGroundFound = 12,
    ENPC_MAX = 13,
};
#pragma pack(pop)
