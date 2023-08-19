#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraExecutionStateSource {
    Scalability = 0,
    Internal = 1,
    Owner = 2,
    InternalCompletion = 3,
    ENiagaraExecutionStateSource_MAX = 4,
};
#pragma pack(pop)
