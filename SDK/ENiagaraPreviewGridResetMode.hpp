#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraPreviewGridResetMode : uint8_t {
    Never = 0,
    Individual = 1,
    All = 2,
    ENiagaraPreviewGridResetMode_MAX = 3,
};
#pragma pack(pop)
