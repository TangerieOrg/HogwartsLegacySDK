#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class FNiagaraCompileEventSeverity : uint8_t {
    Log = 0,
    Warning = 1,
    Error = 2,
    FNiagaraCompileEventSeverity_MAX = 3,
};
#pragma pack(pop)
