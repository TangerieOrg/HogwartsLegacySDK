#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRigUpdatePhase {
    None = 0,
    HandleUpdate = 2,
    HandleExternalEvents = 3,
    LastPhase = 3,
    ETimeRigUpdatePhase_MAX = 4,
};
#pragma pack(pop)
