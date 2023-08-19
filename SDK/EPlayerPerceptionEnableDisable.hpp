#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPlayerPerceptionEnableDisable : uint8_t {
    Ignore = 0,
    Enable = 1,
    Disable = 2,
    EPlayerPerceptionEnableDisable_MAX = 3,
};
#pragma pack(pop)
