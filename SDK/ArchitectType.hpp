#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ArchitectType : uint8_t {
    ANIMATION_ARCHITECT = 0,
    INTERACTION_ARCHITECT = 1,
    SOUND_ARCHITECT = 2,
    STATION_ARCHITECT = 3,
    OBJECT_ARCHITECT = 4,
    ArchitectType_MAX = 5,
};
#pragma pack(pop)
