#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimationRequestLayerBlendType : int8_t {
    Replacement = 0,
    Additive = 1,
    BlendAndReplace = 2,
    BlendAndAdd = 3,
    Modify = 4,
    EAnimationRequestLayerBlendType_MAX = 5,
};
#pragma pack(pop)
