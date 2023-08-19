#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightGroupsMaskLockState : uint8_t {
    Unlocked = 0,
    LockedOn = 1,
    LockedOff = 2,
    EGlobalLightGroupsMaskLockState_MAX = 3,
};
#pragma pack(pop)
