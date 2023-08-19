#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameplayTaskRunResult {
    Error = 0,
    Failed = 1,
    Success_Paused = 2,
    Success_Active = 3,
    Success_Finished = 4,
    EGameplayTaskRunResult_MAX = 5,
};
#pragma pack(pop)
