#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELockOnReticleType : uint8_t {
    None = 0,
    LockedOn = 1,
    AimMode = 2,
    Both = 3,
    Retaliate = 4,
    ELockOnReticleType_MAX = 5,
};
#pragma pack(pop)
