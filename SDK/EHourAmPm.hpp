#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHourAmPm : uint8_t {
    AM = 0,
    PM = 1,
    EHourAmPm_MAX = 2,
};
#pragma pack(pop)
