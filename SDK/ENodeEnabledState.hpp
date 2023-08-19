#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENodeEnabledState : uint8_t {
    Enabled = 0,
    Disabled = 1,
    DevelopmentOnly = 2,
    ENodeEnabledState_MAX = 3,
};
#pragma pack(pop)
