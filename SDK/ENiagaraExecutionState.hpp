#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraExecutionState : uint32_t {
    Active = 0,
    Inactive = 1,
    InactiveClear = 2,
    Complete = 3,
    Disabled = 4,
    Num = 5,
    ENiagaraExecutionState_MAX = 6,
};
#pragma pack(pop)
