#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRigEnterExitType : uint8_t {
    Entering = 0,
    EnteringInside = 1,
    Exiting = 2,
    Instant = 3,
    Skip = 4,
    Unknown = 5,
    ETimeRigEnterExitType_MAX = 6,
};
#pragma pack(pop)
