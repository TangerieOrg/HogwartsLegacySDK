#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EVisibilityTrackCondition : uint8_t {
    EVTC_Always = 0,
    EVTC_GoreEnabled = 1,
    EVTC_GoreDisabled = 2,
    EVTC_MAX = 3,
};
#pragma pack(pop)
