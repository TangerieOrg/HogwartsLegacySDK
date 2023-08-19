#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum DistributionParamMode : uint8_t {
    DPM_Normal = 0,
    DPM_Abs = 1,
    DPM_Direct = 2,
    DPM_MAX = 3,
};
#pragma pack(pop)
