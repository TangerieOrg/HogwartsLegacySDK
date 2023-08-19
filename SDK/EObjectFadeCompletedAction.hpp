#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EObjectFadeCompletedAction : uint8_t {
    Default = 0,
    HoldInSystem = 1,
    ReleaseFromSystem = 2,
    FadeOut_HideObject = 3,
    FadeOut_KillObject = 4,
    EObjectFadeCompletedAction_MAX = 5,
};
#pragma pack(pop)
