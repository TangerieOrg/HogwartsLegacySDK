#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraDataSetType : uint8_t {
    ParticleData = 0,
    Shared = 1,
    Event = 2,
    ENiagaraDataSetType_MAX = 3,
};
#pragma pack(pop)
