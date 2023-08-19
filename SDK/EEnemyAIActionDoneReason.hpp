#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAIActionDoneReason : uint8_t {
    Stop = 0,
    Abort = 1,
    EEnemyAIActionDoneReason_MAX = 2,
};
#pragma pack(pop)
