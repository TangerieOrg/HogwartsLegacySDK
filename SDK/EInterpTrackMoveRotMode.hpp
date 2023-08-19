#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EInterpTrackMoveRotMode : uint8_t {
    IMR_Keyframed = 0,
    IMR_LookAtGroup = 1,
    IMR_Ignore = 2,
    IMR_MAX = 3,
};
#pragma pack(pop)
