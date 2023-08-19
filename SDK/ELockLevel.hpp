#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELockLevel : uint8_t {
    LockLevel1 = 0,
    LockLevel2 = 1,
    LockLevel3 = 2,
    ELockLevel_MAX = 3,
};
#pragma pack(pop)
