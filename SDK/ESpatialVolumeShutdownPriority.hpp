#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpatialVolumeShutdownPriority {
    Standard = 0,
    InStation = 1,
    AnimNotify = 2,
    AnimNotifyUpate = 3,
    ESpatialVolumeShutdownPriority_MAX = 4,
};
#pragma pack(pop)
