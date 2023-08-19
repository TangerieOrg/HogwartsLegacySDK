#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EForceRenderSettingsPhase : uint8_t {
    Startup = 0,
    BeginPlay = 1,
    EndPlay = 2,
    EForceRenderSettingsPhase_MAX = 3,
};
#pragma pack(pop)
