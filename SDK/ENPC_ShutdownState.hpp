#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_ShutdownState {
    None = 0,
    Execution = 1,
    Rendering = 2,
    Disabled = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
