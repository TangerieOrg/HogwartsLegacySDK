#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAreaUsageFlagSelection : uint8_t {
    AreaUsageFlagSelection_Preferred = 0,
    AreaUsageFlagSelection_Flee = 1,
    AreaUsageFlagSelection_Custom = 2,
    AreaUsageFlagSelection_MAX = 3,
};
#pragma pack(pop)
