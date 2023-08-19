#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_TargetPerceptionType {
    None = 0,
    Attack = 1,
    CrimeScene = 2,
    Notify = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
