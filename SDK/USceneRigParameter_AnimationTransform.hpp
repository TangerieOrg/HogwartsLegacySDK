#pragma once
#include <cstdint>
#include "USceneRigParameter.hpp"
class UAnimationTransformProvider;
#pragma pack(push, 1)
class USceneRigParameter_AnimationTransform : public USceneRigParameter {
public:
    UAnimationTransformProvider* Value; // 0x38
    static USceneRigParameter_AnimationTransform* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
