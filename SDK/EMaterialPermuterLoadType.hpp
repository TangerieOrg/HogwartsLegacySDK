#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialPermuterLoadType : uint8_t {
    Preload = 0,
    Manual = 1,
    Auto = 2,
    TriggerOnly = 3,
    TriggerAndAuto = 4,
    TriggerAndManual = 5,
    EMaterialPermuterLoadType_MAX = 6,
};
#pragma pack(pop)
