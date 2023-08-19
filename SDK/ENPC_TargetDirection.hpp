#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TargetDirection {
    Forward = 0,
    Back = 1,
    Left = 2,
    Right = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
