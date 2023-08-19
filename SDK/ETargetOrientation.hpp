#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETargetOrientation : uint8_t {
    AnyDirection = 0,
    TargetAxis = 1,
    TargetDirection = 2,
    ETargetOrientation_MAX = 3,
};
#pragma pack(pop)
