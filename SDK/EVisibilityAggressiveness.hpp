#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVisibilityAggressiveness : uint8_t {
    VIS_LeastAggressive = 0,
    VIS_ModeratelyAggressive = 1,
    VIS_MostAggressive = 2,
    VIS_Max = 3,
};
#pragma pack(pop)
