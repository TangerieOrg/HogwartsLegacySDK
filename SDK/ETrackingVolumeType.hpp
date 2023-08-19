#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETrackingVolumeType : uint8_t {
    None = 0,
    RandomEncounter = 1,
    EncounterExclusion = 2,
    Perception = 3,
    ForceAction = 4,
    ETrackingVolumeType_MAX = 5,
};
#pragma pack(pop)
