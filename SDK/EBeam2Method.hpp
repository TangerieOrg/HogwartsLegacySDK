#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBeam2Method : uint8_t {
    PEB2M_Distance = 0,
    PEB2M_Target = 1,
    PEB2M_Branch = 2,
    PEB2M_MAX = 3,
};
#pragma pack(pop)
