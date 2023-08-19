#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraDebugPlaybackMode : uint8_t {
    Play = 0,
    Loop = 1,
    Paused = 2,
    Step = 3,
    ENiagaraDebugPlaybackMode_MAX = 4,
};
#pragma pack(pop)
