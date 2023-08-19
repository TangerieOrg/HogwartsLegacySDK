#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStreamingBehaviorType {
    Persistent = 0,
    Attached = 1,
    VolumeBased = 2,
    VolumeBasedLOD = 3,
    WorldComposition = 4,
    WorldCompositionLOD = 5,
    EStreamingBehaviorType_MAX = 6,
};
#pragma pack(pop)
