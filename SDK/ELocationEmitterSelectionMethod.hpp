#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELocationEmitterSelectionMethod : uint8_t {
    ELESM_Random = 0,
    ELESM_Sequential = 1,
    ELESM_MAX = 2,
};
#pragma pack(pop)
