#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureImpactSize : int32_t {
    Large = 0,
    Medium = 1,
    Small = 2,
    Num = 3,
    ECreatureImpactSize_MAX = 4,
};
#pragma pack(pop)
