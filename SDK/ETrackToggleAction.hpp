#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETrackToggleAction : uint8_t {
    ETTA_Off = 0,
    ETTA_On = 1,
    ETTA_Toggle = 2,
    ETTA_Trigger = 3,
    ETTA_MAX = 4,
};
#pragma pack(pop)
