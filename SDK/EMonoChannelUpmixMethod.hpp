#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMonoChannelUpmixMethod : int8_t {
    Linear = 0,
    EqualPower = 1,
    FullVolume = 2,
    EMonoChannelUpmixMethod_MAX = 3,
};
#pragma pack(pop)
