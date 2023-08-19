#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureMountErrorMessages {
    Error_GraphornDisabled = 0,
    Error_HippogriffDisabled = 1,
    Error_TakeOffUnavailable = 2,
    Error_ChargeUnavailable = 3,
    Error_ChargeOnCooldown = 4,
    Error_InsufficientSpawnArea = 5,
    Error_MountDeathCooldown = 6,
    Error_InsideNoTakeOffZone = 7,
    Error_InsideNoLandZone = 8,
    Error_InsideNoMountingZone = 9,
    Error_InsideNoMountingArea = 10,
    Error_MAX = 11,
};
#pragma pack(pop)
