#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXComponentAutoStartState : uint8_t {
    WaitingToStart = 0,
    Running = 1,
    Done = 2,
    ESkinFXComponentAutoStartState_MAX = 3,
};
#pragma pack(pop)
