#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESceneRigAnimationRootBlendMode : uint8_t {
    BlendRootWithAnimation = 0,
    DoNotBlendRoot = 1,
    ESceneRigAnimationRootBlendMode_MAX = 2,
};
#pragma pack(pop)
