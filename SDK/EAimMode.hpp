#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAimMode : uint8_t {
    AimAtTarget = 0,
    OrientToTarget = 1,
    MAX = 2,
};
#pragma pack(pop)
