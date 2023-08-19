#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConcurrencyVolumeScaleMode : int32_t {
    Default = 0,
    Distance = 1,
    Priority = 2,
    EConcurrencyVolumeScaleMode_MAX = 3,
};
#pragma pack(pop)
