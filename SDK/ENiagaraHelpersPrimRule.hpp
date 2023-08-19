#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraHelpersPrimRule : uint8_t {
    DoNotSpawn = 0,
    OnlySpawn = 1,
    ENiagaraHelpersPrimRule_MAX = 2,
};
#pragma pack(pop)
