#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraDefaultMode {
    Value = 0,
    Binding = 1,
    Custom = 2,
    FailIfPreviouslyNotSet = 3,
    ENiagaraDefaultMode_MAX = 4,
};
#pragma pack(pop)
