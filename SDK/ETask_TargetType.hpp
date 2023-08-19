#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETask_TargetType : uint8_t {
    None = 0,
    Location = 1,
    Actor = 2,
    DesiredDirection = 3,
    CognitionTarget = 4,
    FwdLoop = 5,
    ETask_MAX = 6,
};
#pragma pack(pop)
