#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraTickBehavior : uint8_t {
    UsePrereqs = 0,
    UseComponentTickGroup = 1,
    ForceTickFirst = 2,
    ForceTickLast = 3,
    ENiagaraTickBehavior_MAX = 4,
};
#pragma pack(pop)
