#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum AnimationKeyFormat {
    AKF_ConstantKeyLerp = 0,
    AKF_VariableKeyLerp = 1,
    AKF_PerTrackCompression = 2,
    AKF_MAX = 3,
};
#pragma pack(pop)
