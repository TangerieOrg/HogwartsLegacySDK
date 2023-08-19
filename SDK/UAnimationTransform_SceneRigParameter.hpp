#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_AnimationTransform.hpp"
#include "UAnimationTransformProvider.hpp"
#pragma pack(push, 1)
class UAnimationTransform_SceneRigParameter : public UAnimationTransformProvider {
public:
    FSceneRigParameterBinding_AnimationTransform BoundParameter; // 0x38
    static UAnimationTransform_SceneRigParameter* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
