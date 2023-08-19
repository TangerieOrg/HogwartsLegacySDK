#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraSystemSpawnSectionEndBehavior : int32_t {
    SetSystemInactive = 0,
    Deactivate = 1,
    None = 2,
    ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};
#pragma pack(pop)
