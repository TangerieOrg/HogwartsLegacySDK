#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraAgeUpdateMode : uint8_t {
    TickDeltaTime = 0,
    DesiredAge = 1,
    DesiredAgeNoSeek = 2,
    ENiagaraAgeUpdateMode_MAX = 3,
};
#pragma pack(pop)
