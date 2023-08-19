#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraSystemInstanceState {
    None = 0,
    PendingSpawn = 1,
    PendingSpawnPaused = 2,
    Spawning = 3,
    Running = 4,
    Paused = 5,
    Num = 6,
    ENiagaraSystemInstanceState_MAX = 7,
};
#pragma pack(pop)
