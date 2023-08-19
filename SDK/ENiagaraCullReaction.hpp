#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraCullReaction : int32_t {
    Deactivate = 0,
    DeactivateImmediate = 1,
    DeactivateResume = 2,
    DeactivateImmediateResume = 3,
    ENiagaraCullReaction_MAX = 4,
};
#pragma pack(pop)
