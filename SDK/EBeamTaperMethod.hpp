#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBeamTaperMethod : uint8_t {
    PEBTM_None = 0,
    PEBTM_Full = 1,
    PEBTM_Partial = 2,
    PEBTM_MAX = 3,
};
#pragma pack(pop)
