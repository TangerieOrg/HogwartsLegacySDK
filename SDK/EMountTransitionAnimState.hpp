#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountTransitionAnimState : uint8_t {
    Wait = 0,
    Mount_Start = 1,
    Mount_Cancel = 2,
    Mount_Standing = 3,
    Mount_Trot = 4,
    Dismount_Standing_Start = 5,
    Dismount_Trot_Start = 6,
    Dismount_Standing = 7,
    Dismount_Trot = 8,
    Dismount_End = 9,
    Dismount_Knockdown = 10,
    EMountTransitionAnimState_MAX = 11,
};
#pragma pack(pop)
