#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInertializationState {
    Inactive = 0,
    Pending = 1,
    Active = 2,
    EInertializationState_MAX = 3,
};
#pragma pack(pop)
