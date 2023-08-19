#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_ShowUIPerceptionIndicatorMode : uint8_t {
    Progression = 0,
    AggroOnly = 1,
    ENPC_MAX = 2,
};
#pragma pack(pop)
