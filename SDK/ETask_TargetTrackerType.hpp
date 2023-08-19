#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETask_TargetTrackerType : uint8_t {
    None = 0,
    Face = 1,
    LookAt = 2,
    AimAt = 3,
    ETask_MAX = 4,
};
#pragma pack(pop)
