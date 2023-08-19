#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRigInitializingBehavior : uint8_t {
    UseSRSettings = 0,
    None = 1,
    ShowLoadingIcon = 2,
    FadeToBlackAndShowLoadingIcon = 3,
    HardToBlackAndShowLoadingIcon = 4,
    FadeToBlackHoldFade = 5,
    BehindCurtain = 6,
    ETimeRigInitializingBehavior_MAX = 7,
};
#pragma pack(pop)
