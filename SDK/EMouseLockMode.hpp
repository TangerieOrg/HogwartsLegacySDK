#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMouseLockMode : uint8_t {
    DoNotLock = 0,
    LockOnCapture = 1,
    LockAlways = 2,
    LockInFullscreen = 3,
    EMouseLockMode_MAX = 4,
};
#pragma pack(pop)
