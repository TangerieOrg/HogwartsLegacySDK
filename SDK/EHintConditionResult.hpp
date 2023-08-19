#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHintConditionResult {
    ConditionFalse = 0,
    ConditionTrue = 1,
    ConditionReset = 2,
    EHintConditionResult_MAX = 3,
};
#pragma pack(pop)
