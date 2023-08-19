#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAntiAliasingMethod : uint8_t {
    AAM_None = 0,
    AAM_FXAA = 1,
    AAM_TemporalAA = 2,
    AAM_MSAA = 3,
    AAM_MAX = 4,
};
#pragma pack(pop)
