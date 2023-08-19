#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAdditiveBasePoseType : uint8_t {
    ABPT_None = 0,
    ABPT_RefPose = 1,
    ABPT_AnimScaled = 2,
    ABPT_AnimFrame = 3,
    ABPT_MAX = 4,
};
#pragma pack(pop)
