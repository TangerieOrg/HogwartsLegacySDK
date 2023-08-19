#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ModulationParamMode : uint8_t {
    MPM_Normal = 0,
    MPM_Abs = 1,
    MPM_Direct = 2,
    MPM_MAX = 3,
};
#pragma pack(pop)
