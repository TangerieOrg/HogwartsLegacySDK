#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBroomMountErrorMessages {
    Error_BroomDisabled = 0,
    Error_InsideNoMountingZone = 1,
    Error_InsideNoMountingArea = 2,
    Error_SpeedBoostUnavailable = 3,
    Error_SpeedBoostOnCooldown = 4,
    Error_InsufficientSpawnArea = 5,
    Error_MAX = 6,
};
#pragma pack(pop)
