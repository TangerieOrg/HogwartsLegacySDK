#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraRibbonTessellationMode : uint8_t {
    Automatic = 0,
    Custom = 1,
    Disabled = 2,
    ENiagaraRibbonTessellationMode_MAX = 3,
};
#pragma pack(pop)
