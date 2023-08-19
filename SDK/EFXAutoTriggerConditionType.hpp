#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFXAutoTriggerConditionType : uint8_t {
    StartAndEnd = 0,
    StartOnly = 1,
    EndOnly = 2,
    EFXAutoTriggerConditionType_MAX = 3,
};
#pragma pack(pop)
