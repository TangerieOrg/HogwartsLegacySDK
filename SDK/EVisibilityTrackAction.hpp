#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVisibilityTrackAction : uint8_t {
    EVTA_Hide = 0,
    EVTA_Show = 1,
    EVTA_Toggle = 2,
    EVTA_MAX = 3,
};
#pragma pack(pop)
