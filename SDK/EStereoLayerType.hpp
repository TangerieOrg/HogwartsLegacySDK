#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStereoLayerType : uint8_t {
    SLT_WorldLocked = 0,
    SLT_TrackerLocked = 1,
    SLT_FaceLocked = 2,
    SLT_MAX = 3,
};
#pragma pack(pop)
