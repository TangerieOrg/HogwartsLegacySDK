#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESourceBusSendLevelControlMethod : uint8_t {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESourceBusSendLevelControlMethod_MAX = 3,
};
#pragma pack(pop)
