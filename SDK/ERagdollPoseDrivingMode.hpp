#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERagdollPoseDrivingMode : uint8_t {
    Strong = 0,
    Weak = 1,
    Inactive = 2,
    Dead = 3,
    Petrified = 4,
    ERagdollPoseDrivingMode_MAX = 5,
};
#pragma pack(pop)
