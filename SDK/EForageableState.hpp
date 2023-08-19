#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EForageableState : uint8_t {
    Inactive = 0,
    Idle = 1,
    Collected = 2,
    EForageableState_MAX = 3,
};
#pragma pack(pop)
